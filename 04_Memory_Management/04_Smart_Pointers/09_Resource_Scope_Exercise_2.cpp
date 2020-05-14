/*
This example shows the differences between various scopes in C++. 
It uses the same variable name in same program but for different purposes. 
Using global, namespace and function scope will enable us to declare same variable name with different set of data for correspoding scope

1.  Declare global variable as part of global scope
2.  Put it in global space, free from any function or closure({})
3.  Declare namespace test and name variable with same name but different value
4.  Create function called func which will use declaration of same variable with different value
5.  Print that variable inside function
6.  In main function declare local variable
7.  Print global variable with :: (global resource specificator)
8.  Print namespace variable with test::variable_name
9.  Call function func
10. Print local variable
*/

#include<iostream>
using namespace std;

int var=10;

namespace test
{
    int var=20;
};

int func()
{
    int var=30;
    return var;
}

int main()
{
    int var=40;
    cout<<"Global Variable: "<<::var<<endl;
    cout<<"Namespace Variable: "<<test::var<<endl;
    cout<<"func Variable: "<<func()<<endl;
    cout<<"Local Variable: "<<var<<endl;
}
/*
O/P:
----
Global Variable: 10
Namespace Variable: 20
func Variable: 30
Local Variable: 40
*/