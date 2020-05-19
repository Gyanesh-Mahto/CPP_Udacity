#include<iostream>
#include<thread>
using namespace std;

void thread_func()
{
    //Do some task in thread
    this_thread::sleep_for(chrono::milliseconds(50));   //Simulate work
    cout<<"Finished task in thread"<<endl;
}

int main()
{
    //Creating thread
    thread t(thread_func);

    //Using detach: Thread will run separately from main thread
    t.detach();

    //Do some task in main
    this_thread::sleep_for(chrono::milliseconds(50));   //Simulate work
    cout<<"Finished task in main"<<endl;
}
/*
For Linux Environment:
-->Compile with command: g++ -std=c++11 -pthread ./example_6.cpp
-->./a.out

For Windows Environment:
-->Compile with command: g++ -std=c++11 ./example_6.cpp
-->./a.exe

O/P is not fixed
O/P:
Finished task in thread
Finished task in main
*/
