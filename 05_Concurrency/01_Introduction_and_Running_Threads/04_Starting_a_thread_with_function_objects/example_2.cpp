#include<iostream>
#include<thread>
using namespace std;

class Vehicle
{
    public:
    void operator()()
    {
        cout<<"Vehicle object has been created"<<endl;
    }
};

int main()
{
    thread t1((Vehicle()));  //Function Object: C++'s most vexing parse
    thread t2=thread(Vehicle());   //Copy Initialization
    thread t3{Vehicle()};   //Uniform initialization with braces 

    //do some task in main()
    this_thread::sleep_for(chrono::milliseconds(10));   //Simulate work
    cout<<"Finished Task in main"<<endl;

    //Waiting for thread to finish
    t1.join();
    t2.join();
    t3.join();
}

/*
O/P:
----
Vehicle object has been created
Vehicle object has been created
Vehicle object has been created
Finished Task in main
*/