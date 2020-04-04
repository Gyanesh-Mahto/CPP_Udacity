/*
Exercise: Constructor Syntax
Initializer lists exist for a number of reasons. First, the compiler can optimize initialization faster from an initialization list than from within the 
constructor.

A second reason is a bit of a technical paradox. If you have a const class attribute, you can only initialize it using an initialization list. Otherwise, 
you would violate the const keyword simply by initializing the member in the constructor!

The third reason is that attributes defined as references must use initialization lists.

This exercise showcases several advantages of initializer lists.

Instructions
Modify the exist code to use an initialization list.
Verify that the test passes.
*/
#include<iostream>
using namespace std;

class Date
{
    int const day;
    int const month;
    int const year;
    
    public:
    Date(int d=0, int m=0, int y=0):day(d), month(m), year(y)   //Parametrized Constructor with default constructor with initializer list
    {}
    
    int Day()
    {
        return day;
    }
    int Month()
    {
        return month;
    }
    int Year()
    {
        return year;
    }
};

int main()
{
    Date date(4,8,1995);
    cout<<date.Day()<<"/"<<date.Month()<<"/"<<date.Year()<<endl;
}

/*
4/8/1995
*/