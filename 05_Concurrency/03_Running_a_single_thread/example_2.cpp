#include<iostream>
#include<thread>
using namespace std;

int main()
{
    unsigned nCores=thread::hardware_concurrency();
    cout<<"This machine supports concurrency with: "<<nCores<<" cores available"<<endl;
}

/*
O/P:
----
This machine supports concurrency with: 2 cores available
*/