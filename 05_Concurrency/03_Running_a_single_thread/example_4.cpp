#include<iostream>
#include<thread>
using namespace std;

void thread_func()
{
    this_thread::sleep_for(chrono::milliseconds(50));  //Simulate work
    cout<<"Finished work 1 in thread"<<endl;
    this_thread::sleep_for(chrono::milliseconds(50));  //Simulate work
    cout<<"Finished work 2 in thread"<<endl;
}

int main()
{
    thread t(thread_func);
    this_thread::sleep_for(chrono::milliseconds(50));  //Simulate work
    cout<<"Finished work 1 in main"<<endl;
    this_thread::sleep_for(chrono::milliseconds(50));  //Simulate work
    cout<<"Finished work 2 in main"<<endl;

    // wait for thread to finish
    t.join();
}

/*
For Linux Environment:
-->Compile with command: g++ -std=c++11 -pthread ./example_3.cpp
-->./a.out
Output is not fixed.
O/P:
Finished work 1 in main
Finished work 1 in thread
Finished work 2 in thread
Finished work 2 in main
*/
