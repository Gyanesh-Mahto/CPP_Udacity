#include<iostream>
#include<thread>
using namespace std;

int main()
{
    int id=0;   //Define an integral values
    //auto f0=[](){cout<<"ID: "<<id<<endl;};    //Error since an enclosing-function local variable cannot be referenced in a lambda body unless it is in the capture list
    auto f1=[id](){cout<<"ID: "<<id<<endl;};    // OK, 'id' is captured by value

    id++;
    auto f2=[&id](){cout<<"ID: "<<id<<endl;};   // OK, 'id' is captured by reference
    
    auto f3=[&id](){cout<<"ID: "<<id++<<endl;}; // OK, 'id' is captured by reference

    //auto f4=[id](){cout<<"ID: "<<id++<<endl;}; // Error: increment of read-only variable 'id'

    //auto f5=[id](){cout<<"ID: "<<++id<<endl;};  // Error: increment of read-only variable 'id'

    auto f6=[id]()mutable{cout<<"ID: "<<++id<<endl;};   // OK, 'id' may be modified with mutable keyword

    //auto f6=[id]()mutable{cout<<"ID: "<<--id<<endl;}; //Can't declare lambdas multiple times.
    //execute lambdas
    f1();
    f2();
    f3();
    //f4();
    //f5();
    f6();
    f6();
}

/*
O/P:
----
ID: 0
ID: 1
ID: 1
ID: 2
ID: 3
*/