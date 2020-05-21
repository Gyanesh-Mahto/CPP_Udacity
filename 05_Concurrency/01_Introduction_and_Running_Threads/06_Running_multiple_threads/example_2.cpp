#include<iostream>
#include<thread>
#include<vector>
using namespace std;

int main()
{
    // create threads
    vector<thread> threads;

    for(int i=0; i<10; i++)
    {
        // create new thread from a Lambda
        threads.emplace_back([i](){this_thread::sleep_for(chrono::milliseconds(10*i));cout<<"Finished task in Worker thread # "<<i<<endl;});
    }

    cout<<"Finished task in Main thread"<<endl;

    //Waiting for thread to finish with range based loop
    for(auto &t:threads)
    t.join();
}
/*
O/P:
----
Finished task in Worker thread # 0
Finished task in Main thread
Finished task in Worker thread # 1
Finished task in Worker thread # 2
Finished task in Worker thread # 3
Finished task in Worker thread # 4
Finished task in Worker thread # 5
Finished task in Worker thread # 6
Finished task in Worker thread # 7
Finished task in Worker thread # 8
Finished task in Worker thread # 9
*/