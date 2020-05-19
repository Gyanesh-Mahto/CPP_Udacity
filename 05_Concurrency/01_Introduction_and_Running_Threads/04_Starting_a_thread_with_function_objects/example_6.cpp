#include<iostream>
#include<thread>
using namespace std;

int main()
{
    int id=0;   // Define an integer variable

    // starting a first thread (by reference)
    auto f0=[&id](){this_thread::sleep_for(chrono::milliseconds(100)); cout<<"a) ID in thread (call-by-reference) "<<id<<endl;};

    thread t1(f0);

    // starting a second thread (by value)
    auto f1=[id](){this_thread::sleep_for(chrono::milliseconds(100)); cout<<"b) ID in thread (call-by-value) "<<id<<endl;};

    thread t2(f1);

    //Increment and print id in main
    ++id;
    cout<<"c) ID in main (call-by-value) "<<id<<endl;

    // wait for threads before returning
    t1.join();
    t2.join();
}
/*
O/P:
----
c) ID in main (call-by-value) 1
a) ID in thread (call-by-reference) 1
b) ID in thread (call-by-value) 0
*/