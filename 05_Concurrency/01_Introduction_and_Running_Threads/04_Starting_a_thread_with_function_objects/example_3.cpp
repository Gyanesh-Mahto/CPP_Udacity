#include<iostream>
#include<thread>
using namespace std;

class Vehicle
{
    private:
    int _id;

    public:
    Vehicle(int id)
    {
        _id=id;
    }

    void operator()()
    {
        cout<<"Vehicle object# "<<_id<<" has been created"<<endl;
    }
};

int main()
{
    thread t((Vehicle(1)));

    //Do some task in main
    //this_thread::sleep_for(chrono::milliseconds(10));    //Simulate Work
    cout<<"Finished Task in main"<<endl;

    //Wating for thread to finish
    t.join();
}
/*
O/P:
----
Finished Task in main
Vehicle object# 1 has been created
*/