/*
Exercise: Comparison Operator
This lab demonstrates how a simple comparison between two variables of unknown type can work using templates. In this case, by defining a template that 
performs a comparison using the > operator, you can compare two variables of any type (both variables must be of the same type, though) as long as the 
operator > is defined for that type.

Check out the notebook below to see how that works.
*/

#include<iostream>
using namespace std;

template<typename T>
T ReturnMax(T a, T b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    int a=50;
    int b=60;
    int res1;
    res1=ReturnMax(a, b);
    cout<<"Bigger Number between "<<a<<"and "<<b<<" is : "<<res1<<endl;
    float c=50.5;
    float d=60.6;
    float res2;
    res2=ReturnMax(c, d);
    cout<<"Bigger Number between "<<c<<"and "<<d<<" is : "<<res2<<endl;
    cout<<"Bigger Number between "<<a<<"and "<<b<<" is : "<<ReturnMax<int>(a, b)<<endl;   //60
    cout<<"Bigger Number between "<<c<<"and "<<d<<" is : "<<ReturnMax<float>(c,d)<<endl;
}
/*
O/P:
----
Bigger Number between 50and 60 is : 60
Bigger Number between 50.5and 60.6 is : 60.6
Bigger Number between 50and 60 is : 60
Bigger Number between 50.5and 60.6 is : 60.6
*/