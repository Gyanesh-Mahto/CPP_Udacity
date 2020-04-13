/*
Exercise: Class Template
Classes are the building blocks of object oriented programming in C++. Templates support the creation of generic classes!

Class templates can declare and implement generic attributes for use by generic methods. These templates can be very useful when building classes that 
will serve multiple purposes.

OBJECTIVES
    Declare class
    Declare generic attributes
    Declare generic methods which are deduced to the same type
    Initialize the programs

*/
#include<iostream>
#include<vector>
using namespace std;

template<class T>
class Container
{
    vector<T> arr;
    int c;

    public:
    Container() :c(0)
    {
        arr.clear();
    }

    int size()
    {
        cout<<endl<<"Size of Container: "<<c<<endl;
    }

    void add(T el)
    {
        c++;
        arr.push_back(el);
    }

    void print()
    {
        for(auto i=arr.begin(); i!=arr.end(); i++)
        cout<<*i<<" ";
    }
    
};

int main()
{
    Container<double> obj1;     // Partial deduction: element type is specified
    obj1.add(50.505050);
    obj1.add(90.903434);
    obj1.print();
    obj1.size();

    Container<char> obj2;   // Partial deduction: element type is specified
    obj2.add('A');
    obj2.add('B');
    obj2.add('C');
    obj2.print();
    obj2.size();

    Container<int> obj3;    // Partial deduction: element type is specified
    obj3.add(1);
    obj3.add(2);
    obj3.add(3);
    obj3.print();
    obj3.size();
}
/*
O/P:
----
50.505 90.9034
Size of Container: 2
A B C
Size of Container: 3
1 2 3
Size of Container: 3
*/