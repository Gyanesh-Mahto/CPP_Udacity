#include<iostream>
#include<thread>
using namespace std;

int main()
{
    cout<<"Hello Concurrent World from main!!! Thread id: "<<this_thread::get_id()<<endl;
}

/*
O/P:
----
Hello Concurrent World from main!!! Thread id: thread::id of a non-executing thread
*/