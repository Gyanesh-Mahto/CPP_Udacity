/*
In this exercise, we will use templates to overload the '#' operator to average two numbers.

*/

#include<iostream>
using namespace std;

template<typename T>
T Average(T x, T y)
{
    return((x+y)/2.0);
}

int main()
{
    int a=10;
    int b=20;
    cout<<Average(a, b)<<endl;

    float c=10.5;
    float d=20.5;
    cout<<Average(c, d)<<endl;
}