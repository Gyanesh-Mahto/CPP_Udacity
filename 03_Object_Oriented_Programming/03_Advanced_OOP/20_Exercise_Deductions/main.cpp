/*
Exercise: Deduction
In this example, you will see the difference between total and partial deduction.

Deduction occurs when you instantiate an object without explicitly identifying the types. Instead, the compiler "deduces" the types. This can be helpful 
for writing code that is generic and can handle a variety of inputs.

OBJECTIVES
Declare a generic conditional function
Use it in conditional sorting
Declare another function which is used for processing generic types (this case is print())
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// template function comparison of two numbers
template<typename T>
bool func(T x, T y)
{
    return(x < y);
}

// template for printing
template<typename T>
void print(vector<T> v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<double> v = {9,3,2,32.32,10.323,10.0003,4.9789};
    vector<char> v2 = {'a','Z','M','x','Y','c','U'};

    print(v);   // Deducing function return type
    sort(v.begin(), v.end(), func<double>);
    print(v);

    print(v2);  // For input parameters as PrintVector we have total deduction,without specification
    sort(v2.begin(), v2.end(), func<char>); // this will support any type of that which has defined support for (in this case) < operator
    print(v2);
}
/*
O/P:
-----
9 3 2 32.32 10.323 10.0003 4.9789
2 3 4.9789 9 10.0003 10.323 32.32
a Z M x Y c U
M U Y Z a c x
*/