/*
This example illustrates usage of namespaces 
in C++. With this techique we can create a centralized contained scope of data which can be used in other parts of application. 
We are going to create a namespace called math, where we are going to add typical mathematical constants.

1. Declare namespace called math
1. Inside of the namespace declare common mathematical constants
1. Declare pi, euler, square root of 2 , and logarithm of 2
1. Use main to print namespace variables
1. Use resource scope specificator to access namespace variables
*/
#include<iostream>
using namespace std;

namespace math
{
    const double pi=3.14;
    const double euler=2.718;
    const double sqrt = 1.414;
    const double ln= 0.69;
};

int main()
{
    cout<<math::pi<<endl;
    cout<<math::euler<<endl;
    cout<<math::sqrt<<endl;
    cout<<math::ln<<endl;
}
/*
O/P:
----
3.14
2.718
1.414
0.69
*/