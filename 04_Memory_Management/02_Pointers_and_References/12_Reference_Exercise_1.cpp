/*
LAB 1
Objectives 1
In this lab we are going to introduce a concept of references. We are going to make a function which
will have simple task. To swap two variables. This task couldn't be fulfilled without references.

In this case, if we look closely we have two input parameters which needs to be modified as a 
result of execution of this function. We are going to create a function which will have two 
generic input parameters, used via template arguments. After that we are going to pass these 
paremeters via reference. Because we are sending these values with their corresponding info 
about their place in memory, we will directly affect these arguments from the function.

Steps 1
    1. Create function swap.
    2. Use template arguments, create generic type T which will be type of both input parameters
    3. Declare input parameters by reference
    4. Create function logic to swap two variable data
    5. Logic is going to swap variables without usage of the helper ( temp ) variable
    6. return type of function is void ( doesn't return value)
    7. Print out value of variables before and after function execution
    8. exit main function
*/
#include<iostream>
using namespace std;

template<typename T>
void Swap(T &first, T &second)
{
    first=first+second;
    second=first-second;
    first=first-second;
}

int main()
{
    int fir=10, sec=20;
    cout<<"First Element: "<<fir<<" "<<"Second Element: "<<sec<<endl;
    Swap(fir, sec);
    cout<<"First Element: "<<fir<<" "<<"Second Element: "<<sec<<endl;
}
