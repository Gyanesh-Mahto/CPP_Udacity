#include <iostream>
#include <thread>
using namespace std;

void printMessage(string message)
{
    this_thread::sleep_for(chrono::milliseconds(10)); // simulate work
    cout << "Thread 1: " << message << endl;
}

int main()
{
    // define message
    string message = "My Message";

    // start thread using variadic templates
    thread t1(printMessage, message);

    // start thread using a Lambda
    thread t2([message] {
        this_thread::sleep_for(chrono::milliseconds(10)); // simulate work
        cout << "Thread 2: " << message << endl;
    });

    // thread barrier
    t1.join();
    t2.join();

    return 0;
}