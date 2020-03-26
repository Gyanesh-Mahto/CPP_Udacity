/*
Stack:
------
In C++ stack memory is a place where local variables are stored upon declaration. The stack is 
also used for storage of parameters passed to function. The stack is a LIFO( Last In First Out) 
data structure that is organized and controlled by the CPU. Every time that an action inside of 
a function triggers the declaration of a new variable, it is pushed onto the stack by that parent 
function. After that when function exits, and resolves its work, all of the data from variables, 
which are pushed into the stack are freed and that part of memory becomes available for other 
data. The advantage of using the stack region of memory for variable storage is that memory is 
managed by the CPU, freeing you from any concerns. Another advantage of this approach is that the 
CPU is in charge and in control during this process. With that in mind, you get an optimized and 
efficient process.

Stack Features:
1. only local variables
2. resizing of variables cannot be done
3. efficiently managed space by CPU, memory does not become fragmented
4. very quick access
5. there is a limit on stack size (OS-dependent)
6. explicit de-allocation of variables is not mandatory

Generally speaking stack is a limited resource and it shouldn't be used for anything large in 
memory size. Problems like out of memory stack is stack buffer overflow. It's a serious problem 
to solve and it can be encountered in small, primitive systems, such as microcontrollers found 
in embedded systems.
*/
#include<iostream>
using namespace std;

int stackFunction(int x)
{
    int y=5;
    x=x+y;
    return x;
}

int main()
{
    int param=10;
    cout<<stackFunction(param)<<endl;
}
/*
O/P: 15
*/