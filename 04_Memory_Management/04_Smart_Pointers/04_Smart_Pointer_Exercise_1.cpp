/*
Illustrate the use of unique_ptr in C++. With this example
use the common method when handling these type of pointers.

1.  Declare simple class called A
2.  Add one method which is non - return type
3.  Print something in it
4.  Declare new pointer unique_ptr which is same type as declared class
5.  Using constructor syntax, as part of declaration of pointer declare new class
    A instance
6.  Using pointer reference syntax "->" invoke class method
7.  Use .get() method to retrieve memory address from declared pointer
8.  Use move method to transfer memory data from first pointer to second one
9.  Try to print both addresses via get()
10. Add third pointer
11. Try same thing
12. Notice that info is transfered to next pointer without leaving copies in
    previous ones
*/
#include<iostream>
#include<memory>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"Class A function"<<endl;
    }
};

int main()
{
    unique_ptr<A> ptr_1(new A);
    ptr_1->fun();
    cout<<endl;
    cout<<"Address of Pointer 1: "<<ptr_1.get()<<endl;
    unique_ptr<A> ptr_2;
    ptr_2=move(ptr_1);
    ptr_2->fun();
    cout<<"Address of Pointer 1: "<<ptr_1.get()<<" "<<"Address of Pointer 2: "<<ptr_2.get()<<endl;
    cout<<endl;
    unique_ptr<A> ptr_3;
    ptr_3=move(ptr_2);
    ptr_3->fun();
    cout<<"Address of Pointer 1: "<<ptr_1.get()<<" "<<"Address of Pointer 2: "<<ptr_2.get()<<" "<<"Address of Pointer 3: "<<" "<<ptr_3.get()<<endl;
}
/*
Class A function

Address of Pointer 1: 0x88ac20
Class A function
Address of Pointer 1: 0 Address of Pointer 2: 0x88ac20

Class A function
Address of Pointer 1: 0 Address of Pointer 2: 0 Address of Pointer 3:  0x88ac20
*/