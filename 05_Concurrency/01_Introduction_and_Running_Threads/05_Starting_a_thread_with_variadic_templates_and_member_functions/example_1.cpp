#include<iostream>
#include<thread>
#include<string>
using namespace std;

void printID(int id)
{
    this_thread::sleep_for(chrono::milliseconds(50));
    cout<<"ID: "<<id<<endl;
}

void printIDandName(int id, string name)
{
    this_thread::sleep_for(chrono::milliseconds(100));
    cout<<"ID: "<<id<<", Name: "<<name<<endl;
}

int main()
{
    int id=0;
    thread t1(printID, id);

    thread t2(printIDandName, ++id, "MyString");

    //thread t3(printIDandName, ++id);  //Compiler Error: Wrong number of arguments for function

    //Waiting for thread to finish
    t1.join();
    t2.join();
    //t3.join();
}
/*
O/P:
----
ID: 0
ID: 1, Name: MyString
*/