/*
Pointer Project LAB
Description
Using pointers we are going to create first part of our project.
In this lab using knowledge from pointers and references we are going to create our
generic class called "PtrDetails". This class defines an element that is stored in the
garbage collection information list.

Steps
    1. Declare generic class PtrDetails
    2. Create generics via templates
    3. all attributes and methods are going to be public, because they are going to be used by other classes
    4. create attribute for refcount
    5. create attribute memPtr as generic pointer for storage of basic info about memory
    6. create bool attribute isArray for recognition of memory type allocated
    7. create attribute arraySize for working with array allocation
    8. Declare constructor for PtrDetails which will have two parameters
    9. First constructor paremeter is going to be pointer and second which is not required, is 
    going to be size of eventual array in memory
    10. We need to construct logic of the constructor which will set isArray attribute if size is larger then 0
    11. Create overload operator == which will be used for comparison between to PtrDetails object 
    in lists. It is mandatory

*/
#include<iostream>
using namespace std;

template<class T>
class PtrDetails
{
public:
// TODO: Implement PtrDetails
int refcount=0;
T* memPtr;
bool isArray;
int arraySize;

PtrDetails(T* mem, int sizeArray):memPtr(mem), arraySize(sizeArray)
{
    if (isArray>0)
    return true;
    else
    return false;
}
};

template<class T>
bool operator==(const PtrDetails<T> &obj1, const PtrDetails<T> &obj2)
{
    // TODO: Implement operator
    if(obj1->memPtr == obj2->memPtr)
    return true;
    else
    return false;
}
int main()
{

}