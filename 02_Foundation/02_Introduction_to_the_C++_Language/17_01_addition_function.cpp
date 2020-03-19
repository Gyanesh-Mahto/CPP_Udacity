#include<iostream>
using namespace std;

int addition(int x, int y)
{
    return x+y;
}

int main()
{
    auto i=5, j=9;
    cout<<"After addition of both, sum is: "<<addition(i,j)<<endl;
}