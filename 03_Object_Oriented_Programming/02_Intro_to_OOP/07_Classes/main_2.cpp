#include<iostream>
using namespace std;

class Date
{
    private:
int day{0};
int month{0};
int year{0};

//In the class definition, we've also added the line public:, which is an "access modifier".

public:
 // Declare member setter function
 // Define the SetDate() function

// First off is Date::, which is called the "namespace." Namespaces specify ownership.
//So this function, SetDate(), will be defined as part of the newly created class Date.
void setdate(int d, int m, int y);
int Getdate();
};

void Date::setdate(int d, int m, int y)
{
    int day_numbers[12]={31,28,31,30,31,30,31,30,31,30,31,30};
// TODO: Your code goes here to check if input year is a leap year
    // and if it is, give February 29 days
    /*
    https://en.wikipedia.org/wiki/Leap_year
    if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)
    */
    if(y%4!=0)
    {
        //common year
    }
    else if(y%100!=0)
    {
        //leap year
        day_numbers[1]=29;
    }
    else if(y%400!=0)
    {
        //common year
    }
    else
    {
        //leap year
        day_numbers[1]=29;
    }
    
    /*
    // Check for leap year
    //if(year % 4 == 0 && year % 100 != 0 || year% 400 == 0)
    //    day_numbers[1]++;
    */
   if(d<1 ||m<1 || y<1 || d>day_numbers[m-1] || m>12 || y>9999)
   {
       throw domain_error("Invalid date\n");
       exit(0);
   }
   day=d;
   month=m;
   year=y;
}
int Date::Getdate()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
int main()
{
    Date date;
    date.setdate(29,2,2016);
    date.Getdate();
}