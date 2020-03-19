// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.

#include<iostream>
#include<vector>
using namespace std;

int AdditionFunction(vector<int>v)
{
    auto i=1;
    int sum=0;
    for(auto i:v)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    vector<int> v1{1,2,3,4,5,6};
    int s;
    s=AdditionFunction(v1);
    cout<<"Sum of all elements in a vector is: "<<s<<endl;
}
//Sum of all elements in a vector is: 21