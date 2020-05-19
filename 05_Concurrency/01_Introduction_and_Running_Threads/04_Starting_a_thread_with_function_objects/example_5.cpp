//auto lambda_var=[capture](paramenters){};
#include<iostream>
#include<thread>
using namespace std;

int main()
{
    int id=0;
    id=5;
    //create lambda
    auto f0=[](const int id){cout<<"ID: "<<id<<endl;};
    //lambda function
    f0(id);
}
/*
O/P:
----
ID: 5
*/