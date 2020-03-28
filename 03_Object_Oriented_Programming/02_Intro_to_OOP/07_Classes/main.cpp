/*
Classes
Classes, like structures, provide a way for C++ programmers to aggregate data together in a way 
that makes sense in the context of a specific program. By convention, programmers use structures 
when member variables are independent of each other, and use classes when member variables are 
related by an "invariant".

Invariants
An "invariant" is a rule that limits the values of member variables.

For example, in a Date class, an invariant would specify that the member variable day cannot be 
less than 0. Another invariant would specify that the value of day cannot exceed 28, 29, 30, or 
31, depending on the month and year. Yet another invariant would limit the value of month to 
the range of 1 to 12.

Date Class
Let's define a Date class:

// Use the keyword “class” to define a Date class:
class Date {
  int day{1};
  int month{1};
  int year{0};
};
So far, this class definition provides no invariants. The data members can vary independently of 
each other.

There is one subtle but important change that takes place when we change struct Date to 
class Date. By default, all members of a struct default to public, whereas all members of a 
class default to private. Since we have not specified access for the members of class Date, 
all of the members are private. In fact, we are not able to assign value to them at all!
*/
#include<iostream>
using namespace std;

class Date
{
public:
    int GetDay()
    {
        return day;
    }
    void SetDay(int d)
    {
        if(d>=1 && d<=31)
        {
            day=d;
        }
        else
        {
            cout<<"Invalid Date"<<endl;
            exit(0);
        }
    }

     int GetMonth()
    {
        return month;
    }
    void SetMonth(int m)
    {
        if(m>=1 && m<=12)
        {
            month=m;
        }
        else
        {
            cout<<"Invalid Month"<<endl;
            exit(0);
        }
    }

     int GetYear()
    {
        return year;
    }
    void SetYear(int y)
    {
        if(y>=1 && y<=9999)
        {
            year=y;
        }
        else
        {
            cout<<"Invalid Year"<<endl;
            exit(0);
        }
    }
private:
int day{0};
int month{0};
int year{0};
};

int main()
{
    Date date;
    date.SetDay(4);
    date.SetMonth(11);
    date.SetYear(1995);

    cout<<date.GetDay()<<"/"<<date.GetMonth()<<"/"<<date.GetYear()<<endl;
}