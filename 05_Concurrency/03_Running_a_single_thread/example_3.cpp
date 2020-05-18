#include<iostream>
#include<thread>
using namespace std;

void thread_func()
{
    this_thread::sleep_for(chrono::milliseconds(100));  //Simulate work
    cout<<"Finished work in thread"<<endl;
}

int main()
{
    thread t(thread_func);
    this_thread::sleep_for(chrono::milliseconds(50));  //Simulate work
    cout<<"Finished work in main"<<endl;
    t.join();
}

/*
-->Compile with command: g++ -std=c++11 -pthread ./example_3.cpp
-->./a.out

O/P:
----
Finished work in main
Finished work in thread
*/