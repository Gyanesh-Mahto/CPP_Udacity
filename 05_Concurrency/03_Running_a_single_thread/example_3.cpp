#include<iostream>
#include<thread>
using namespace std;

void thread_func()
{
    //do something in thread
    this_thread::sleep_for(chrono::milliseconds(100));  //Simulate work
    cout<<"Finished work in thread"<<endl;
}

int main()
{
    //Creating thread
    thread t(thread_func);
    
    //do something in main
    this_thread::sleep_for(chrono::milliseconds(50));  //Simulate work
    cout<<"Finished work in main"<<endl;
    
    // wait for thread to finish
    t.join();
}

/*
For Linux Environment:
-->Compile with command: g++ -std=c++11 -pthread ./example_3.cpp
-->./a.out

O/P:
----
Finished work in main
Finished work in thread
*/
