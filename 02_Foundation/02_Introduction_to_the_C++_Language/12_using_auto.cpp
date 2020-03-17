/* Using auto
In your previous code, the type for each variable was explicitly declared.
In general, this is not necessary, and the compiler can determine the type based on the value being assigned.
To have the type automatically determined, use the auto keyword. You can test this by executing the cell below:
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    auto i=5;
    auto v={1,2,3,4,5};
    for(auto i:v)       //for each loop
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
/*
O/P: 1 2 3 4 5
*/
/*
It is helpful to manually declare the type of a variable if you want the variable type to be clear for reader of your code, 
or if you want to be explicit about the number precision being used; 
C++ has several number types with different levels of precision, 
and this precision might not be clear from the value being assigned.
*/
