#include<iostream>
#include<thread>
#include<vector>
using namespace std;

void printHello()
{
    cout<<"Hello from worker thread #"<<this_thread::get_id()<<endl;
}

int main()
{
    //create vector of threads
    vector<thread> threads;

    for(int i=0; i<5; i++)
    {
        // copying thread objects causes a compile error
        /*
        thread t(printHello);
        threads.push_back(t);
        */
        // moving thread objects will work
        threads.emplace_back(thread(printHello));   //emplace_back: Inserts a new element at the end of the vector, right after its current last element. This new element is constructed in place using args as the arguments for its constructor.
    }
    
    //do some task in main
    cout<<"Hello from Main thread #"<<this_thread::get_id()<<endl;
    
    // call join on all thread objects using a range-based loop
    for(auto &t: threads)
    t.join();
}
/*
O/P:
----
Hello from worker thread #2
Hello from worker thread #3
Hello from worker thread #4
Hello from worker thread #6
Hello from Main thread #1
Hello from worker thread #5
*/
