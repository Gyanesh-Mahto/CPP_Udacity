/*
Lab 3
Objectives 3
In this example we are going to try to create dynamic array for integers.
With this we can get primitive overview of how some of the popular container
libraries in C++ work, such as : vector, queqe, stack etc. We know that dynamic
declaration of array was initially supported in C++, but we don't have option to do
resize or similar operation once array has been declared. Via pointers and access
to memory it is pretty simple. So we are going to try to create couple of functions.
First one is "createArr" which will create our array with specified size as input.
Second one is going to be "resizeArr" which will resize our array and preserve our data.
For the purpose of this example, to preserve simplicity we will only allow to expand
our array to specified number of places.

Steps 3
    include standard library iostream
    Declare createArr function. Its input parameters are just integer value
        which represent size of array.
    return type of this function is going to be pointer to integer values.
    Declare second function which will have input as integer value. This value is going
        to represent number of places with which we are going to expand our array
    declare main function.
    first function is going to allocate block of memory for integers. Its size is going
        to be input parameter.
    first function needs to declare pointer which will show to the newly allocated memory block
    Return that pointer as return value of the function
    second function is going to have three parameters,int pointer which will carry our array,
        and int variable, which will indicate how much we are going to expand our
        array and size variable, representing original size
    After that we need to create new pointer which will show to the newly allocated
        space which expanded by number of places specified by our input parameter.
        After using for loop we can copy data from old array to new one
    before exiting our function we need to delete old array memory block using delete[] operator
    Return value of our function is going to be newly created pointer, thus our
        return type of function is going to be pointer of type int
    in main function we can ask for input of size of the array.
    After successful input we can add our data via for loop
    Ask from user expansion info
    Expand our array with second function
    Print expanded array
*/

#include<iostream>
using namespace std;

int* createArr(int size)
{
    int* m;
    m=new int[size];
    return m;
}

int* resizeArr(int *l, int size, int extra_size)
{
    int new_size;
    new_size=size+extra_size;
    int *q=new int[new_size];
    for(int i=0; i<size; i++)
    {
        q[i]=l[i];
    }
    delete []l;
    return q;
}

int main()
{
    int size, Extra_size;
    char ch;
    cout<<"Please enter the size: "<<endl;
    cin>>size;
    int *p;
    p=createArr(size);
    cout<<"Enter the elements in Array: "<<endl;
    for(int i=0; i<size; i++)
    cin>>p[i];

    cout<<"Total size of this Array: "<<size<<endl;

    cout<<"Contents of Array: "<<endl;
    for(int i=0; i<size; i++)
    cout<<p[i]<<" ";
    cout<<endl;
    while(1)
    {
    cout<<"Do you want to resize your Array: "<<endl;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"Please enter by how much size the Array should be expanded: "<<endl;
        cin>>Extra_size;
        int *n;
        int New_size;
        New_size=size+Extra_size;
        n=resizeArr(p, size, Extra_size);
        cout<<"Enter the new "<<Extra_size<<" contents in Array: "<<endl;
        for(int i=size; i<New_size; i++)
        cin>>n[i];
        cout<<"Updated contents of Array: "<<endl;
        for(int i=0; i<New_size; i++)
        cout<<n[i]<<" ";
        cout<<endl;
        delete []n;
    }
    else if(ch=='N'||ch=='n')
    {
    cout<<"Ok!!! Exiting Program"<<endl;
    exit(1);
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    }
}