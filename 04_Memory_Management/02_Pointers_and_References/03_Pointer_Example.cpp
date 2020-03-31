#include<iostream>
using namespace std;

int main()
{
    int *ptr=nullptr;
    int val=5;
    ptr=&val;

    cout<<"Value of ptr(Address): "<<ptr<<endl;
    cout<<"Value of val: "<<val<<endl;
    cout<<"Value of *ptr(Value): "<<*ptr<<endl;
}
/*
O/P:
Value of ptr(Address): 0x7ffd4aed289c
Value of val: 5
Value of *ptr(Value): 5
*/