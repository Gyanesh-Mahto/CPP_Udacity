#include<iostream>
using namespace std;

// Define a simple structure
struct Date
{
int day;
int month;
int year;
};

// Define a main function to instantiate and test

int main()
{
Date date;
date.day=4;
date.month=8;
date.year=1995;
// Print the data in the structure
cout<<"Date: "<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
}

/*
O/P:
Date: 4/8/1995
*/
