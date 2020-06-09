#include <iostream>
#include <thread>
#include <future>
#include <cmath>
#include <memory>
using namespace std;

void divideByNumber(promise<double> &&prms, double num, double denom)
{
    this_thread::sleep_for(chrono::milliseconds(500)); // simulate work
    try
    {
        if (denom == 0)
            throw runtime_error("Exception from thread: Division by zero!");
        else
            prms.set_value(num / denom);
    }
    catch (...)
    {
        prms.set_exception(current_exception());
    }
}

int main()
{
    // create promise and future
    promise<double> prms;
    future<double> ftr = prms.get_future();

    // start thread and pass promise as argument
    double num = 42.0, denom = 0.0;
    thread t(divideByNumber, move(prms), num, denom);

    // retrieve result within try-catch-block
    try
    {
        double result = ftr.get();
        cout << "Result = " << result << endl;
    }
    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }

    // thread barrier
    t.join();

    return 0;
}
