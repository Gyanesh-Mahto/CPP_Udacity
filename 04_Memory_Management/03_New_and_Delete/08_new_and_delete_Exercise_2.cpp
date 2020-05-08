/*
LAB 2
Objectives 2
We are going to use new and delete operators for memory management.
In this example we are going to try to allocate block of memory for storage of array of
integer numbers.Upon completion we are going to use for loop for storage of input data
to newly created array. After that, we are going to use delete array operator for freeing
occupied memory before program exits.

Steps 2
    Declare basic include -> iostream
    Declare main function
    Use pointer syntax to declare integer array pointer
    use new operator to allocate memory block for integer array
    Assign that operation to declared pointer
    Create for loop and use it to input new values from cin stream
    Print every memory address and value in array 1. Release occupied space before exiting
*/
#include<iostream>
using namespace std;

int main()
{
    int *arr_p;
    arr_p=new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr_p[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<"Memory Address: "<<(arr_p+i)<<", Value at Memory Address: "<<arr_p[i]<<endl;
    }
    delete[] arr_p;
}
/*
I/P:
1
2
3
4
5
O/P:
Memory Address: 0xc71590, Value at Memory Address: 1
Memory Address: 0xc71594, Value at Memory Address: 2
Memory Address: 0xc71598, Value at Memory Address: 3
Memory Address: 0xc7159c, Value at Memory Address: 4
Memory Address: 0xc715a0, Value at Memory Address: 5
*/