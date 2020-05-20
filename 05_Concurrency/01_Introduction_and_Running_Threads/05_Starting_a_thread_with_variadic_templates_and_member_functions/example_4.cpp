#include<iostream>
#include<thread>
using namespace std;

class Vehicle
{
    private:
    int _id=0;

    public:
    Vehicle()
    {
        _id=0;
    }

    void addID(int id)
    {
        _id=id;
    }

    void printID()
    {
        cout<<"Vehicle ID: "<<_id<<endl;
    }
};

int main()
{
    Vehicle v1, v2;

    // create thread
    thread t1(&Vehicle::addID, v1, 1);
    thread t2(&Vehicle::addID, &v2, 2);

    // wait for thread to finish
    t1.join();
    t2.join();

    // print Vehicle id
    v1.printID();
    v2.printID();
}
/*
O/P:
----
Vehicle ID: 0
Vehicle ID: 2
*/