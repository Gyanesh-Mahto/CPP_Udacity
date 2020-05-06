/*
LAB 2
Objectives 2
In this lab we are going to use declaration of references to reflect variable changes.
We are going to use two variables, of different data types for storage of data, and then
declare their references to track their changes. After that we are going compare it.

Steps 2
    Declare one integer and one double variable
    Declare two references of same type
    Use initial variables and assign them upon initialization to corresponding references
    Check references, write them out
    Change, modify variables
    Write references again
*/
#include<iostream>
using namespace std;

template<typename T>
void pass_by_reference(T &val)
{
    cout<<"Value of variable: "<<val<<endl;
    cout<<"Address of variable: "<<&val<<endl;
}

template<typename T>
void pass_by_pointer(T *val)
{
    cout<<"variable: "<<val<<endl;
    cout<<"Address of variable: "<<&val<<endl;
    cout<<"*val: "<<*val<<endl;
}

int main()
{
    int val1=10;
    double val2=20.2;

    int &ref1=val1;
    double &ref2=val2;

    cout<<"Value of ref1: "<<ref1<<endl;
    cout<<"Value of ref2: "<<ref2<<endl;

    val1=20;
    val2=40.4;

    cout<<"Value of ref1: "<<ref1<<endl;
    cout<<"Value of ref2: "<<ref2<<endl;

    pass_by_reference(val1);
    pass_by_pointer(&val1);
}