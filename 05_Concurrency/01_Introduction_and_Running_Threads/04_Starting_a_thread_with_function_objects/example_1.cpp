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
    thread t((Vehicle()));  //Function Object

    //do some task in main()
    this_thread::sleep_for(chrono::milliseconds(10));   //Simulate work
    cout<<"Finished Task in main"<<endl;

    //Waiting for thread to finish
    t.join();
}

/*
O/P:
----
Vehicle object has been created
Finished Task in main
*/