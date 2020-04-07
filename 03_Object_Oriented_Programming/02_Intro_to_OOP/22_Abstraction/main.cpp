/*
Abstraction
Abstraction refers to the separation of a class's interface from the details of its implementation. The interface provides a way to interact with an 
object, while hiding the details and implementation of how the class works.

Example
The String() function within this Date class is an example of abstraction.

class Date {
 public:
  ...
  string String() const;
  ...
};
The user is able to interact with the Date class through the String() function, but the user does not need to know about the implementation of either 
Date or String().

For example, the user does not know, or need to know, that this object internally contains three int member variables. The user can just call the 
String() method to get data.

If the designer of this class ever decides to change how the data is stored internally -- using a vector of ints instead of three separate ints, for 
example -- the user of the Date class will not need to know.
*/

#include <iostream>
using namespace std;
//now our class looks like:
class Date {
  private:
    int day;
    int month;
    int year;
  public:
    void SetDate(int d,int m,int y);
    string GetDate();
};

void Date::SetDate(int d,int m,int y) 
{
    int day_numbers[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(y % 4 == 0 && y % 100 != 0 || y% 400 == 0)
        day_numbers[1]++;

    if(y < 1 || d < 1 || m < 1 || m > 12 || d > day_numbers[m - 1])
        throw domain_error("Invalid date!");

    Date::day = d; 
    Date::month = m; 
    Date::year =y;
}
string Date::GetDate()
{
    string result=to_string(Date::day)+"/"+to_string(Date::month)+"/"+to_string(Date::year);
    return result;
}


int main() 
{
    Date birth_date;
    birth_date.SetDate(20, 2, 2019);
    cout << birth_date.GetDate() << "\n";
}
/*
O/P:
20/2/2019
*/