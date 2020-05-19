#include<iostream>
#include<thread>
using namespace std;

void printName(string name, int wait_time)
{
    this_thread::sleep_for(chrono::milliseconds(wait_time));
    cout<<"Name (from thread): "<<name<<endl;
}

int main()
{
    string name1="Hello";
    string name2="World";

    // starting threads using value-copy and move semantics
    thread t1(printName, name1, 50);
    thread t2(printName, move(name2), 100); //name2 is moved to thread t2. So, no name2 exits now in main.

    // wait for threads before returning
    t1.join();
    t2.join();

    // print name from main
    cout<<"Name (from main): "<<name1<<endl;
    cout<<"Name (from main): "<<name2<<endl;    //It is empty since, name2 is moved to thread t2. So, no name2 exits now in main.
}
/*
O/P:
----
Name (from thread): Hello
Name (from thread): World
Name (from main): Hello
Name (from main):
*/