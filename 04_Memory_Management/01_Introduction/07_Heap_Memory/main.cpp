/*
Heap
The heap is a part (region) of a computer's memory that is free for use by a user and isn't 
managed by CPU or any onboard mechanism. It can be observed as a free-floating region of memory 
and is typically substantially larger in memory size than the stack.

Accessing the heap from C++ is done using typical memory management tools like pointers and the 
whole concept behind them. Heap memory is allocated , and because you don't have any backup tool 
which will clean and tidy your actions you are left with a responsibility of freeing used memory 
upon completion of your program. Plainly put, heap memory is memory that gets left over after the 
program loads and the stack memory gets allocated. Running out of heap memory can (and probably 
will) result in thrown error of type std:: bad_alloc. This can be encountered typically in a 
recursive functions and implementations.
*/
/*
Heap Features:
1. memory must be managed
2. memory size is not limited
3. access is relatively slower
4. realloc() is used for the resizing of variables
5. variables can be accessed globally
6. efficient use of space is not guaranteed, memory can become fragmented over time when blocks 
of memory are allocated, then freed
*/
#include<iostream>
using namespace std;

int main()
{
    int *p=new int(10); //Dynamic Memory Allocation
    cout<<*p<<endl; //10
    // preventing memory leakage
    // by freeing used memory
    delete p;   //Memory Deallocation
}