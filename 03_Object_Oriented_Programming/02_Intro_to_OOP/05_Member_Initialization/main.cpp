/*
Member Initialization
Generally, we want to avoid instantiating an object with undefined members. Ideally, we would 
like all members of an object to be in a valid state once the object is instantiated. We can 
change the values of the members later, but we want to avoid any situation in which the members 
are ever in an invalid state or undefined.

In order to ensure that objects of our Date structure always start in a valid state, we can 
initialize the members from within the structure definition.
*/
#include<iostream>
#include<cassert>
using namespace std;

struct Date
{
int day{0};
int month{0};
int year{0};
};

int main()
{
Date date;  //Instantiating the date
//Member Initialization
date.day=4;
date.month=8;
date.year=1995;
//Test
assert(date.day==4);
assert(date.month==8);
assert(date.year==1995);
//Print
cout<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
}
/*
O/P: 4/8/1995
*/