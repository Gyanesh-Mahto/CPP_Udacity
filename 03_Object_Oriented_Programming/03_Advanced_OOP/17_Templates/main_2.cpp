#include<iostream>
#include<typeinfo>
using namespace std;

template<typename T, typename U=int>

class ClassA
{
    public:
    T x;
    U a;
    ClassA()
    {
        cout<<"Constructor Called"<<endl;
        cout<<"x type: "<<typeid(x).name()<<endl;
        cout<<"a type: "<<typeid(a).name()<<endl;
    }
};

template<typename T>
T Sum(T a, T b)
{
    return a+b;
}

int main()
{
    ClassA<char,char> objectA;
    ClassA<char> objectB;
    cout<<"Double: "<<endl<<Sum<double>(20.5, 30.5)<<endl;
    cout<<"Int: "<<endl<<Sum<int>(20, 30)<<endl;
    cout<<"Double: "<<endl<<Sum(20.5, 30.5)<<endl;
    cout<<"Int: "<<endl<<Sum(20, 30)<<endl;
}
/*
O/P:
----
Constructor Called
x type: c
a type: c
Constructor Called
x type: c
a type: i
Double:
51
Int:
50
Double:
51
Int:
50
*/