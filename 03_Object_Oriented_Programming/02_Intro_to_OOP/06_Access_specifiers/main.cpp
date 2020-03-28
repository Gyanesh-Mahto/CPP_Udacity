/*
Access Specifiers
Members of a structure can be specified as public or private.

By default, all members of a structure are public, unless they are specifically marked private.

Public members can be changed directly, by any user of the object, whereas private members can 
only be changed by the object itself.

Private Members
This is an implementation of the Date structure, with all members marked as private.
Private members of a class are accessible only from within other member functions of the same 
class (or from their "friends", which we’ll talk about later).

There is a third access modifier called protected, which implies that members are accessible from 
other member functions of the same class (or from their "friends"), and also from members of their 
derived classes. We'll also discuss about derived classes later, when we learn about inheritance.
*/
#include<iostream>
#include<cassert>
using namespace std;

struct Date
{
public:
int GetDay()        //Getter
{
    return day;
}
void SetDay(int d)  //Setter
{
    this->day=d;
}
int GetMonth()      //Getter
{
    return month;
}
void SetMonth(int m)    //Setter
{
    this->month=m;
}
int GetYear()       //Getter
{
    return year;
}
void SetYear(int y)     //Setter
{
    this->year=y;
}
private:
int day{0};
int month{0};
int year{0};
};

int main()
{
Date date;  //Instantiating the date
//Member Initialization
date.SetDay(4);
date.SetMonth(8);
date.SetYear(1995);
//Print
cout<<date.GetDay()<<"/"<<date.GetMonth()<<"/"<<date.GetYear()<<endl;
}
/*
O/P: 4/8/1995
*/