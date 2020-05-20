#include<iostream>
#include<thread>
using namespace std;

void printName(string &name, int wait_time)
{
    this_thread::sleep_for(chrono::milliseconds(50));
    name+=" (from thread)";
    cout<<name<<endl;
}

int main()
{
    string name="Hello";

    // starting thread
    thread t(printName, ref(name), 50);

    // wait for thread before returning
    t.join();

    // print name from main
    name+=" (from main)";
    cout<<name<<endl;
}
/*
O/P:
----
Hello (from thread)
Hello (from thread) (from main)
*/