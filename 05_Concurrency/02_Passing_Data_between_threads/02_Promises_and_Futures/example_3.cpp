#include <iostream>
#include <thread>
#include <future>
#include <cmath>
using namespace std;

void computeSqrt(promise<double> &&prms, double input)
{
    this_thread::sleep_for(chrono::milliseconds(500)); // simulate work
    double output = sqrt(input);
    prms.set_value(output);
}

int main()
{
    // define input data
    double inputData = 42.0;

    // create promise and future
    promise<double> prms;
    future<double> ftr = prms.get_future();

    // start thread and pass promise as argument
    thread t(computeSqrt, move(prms), inputData);

// Student task STARTS here
    // wait for result to become available
    auto status = ftr.wait_for(chrono::milliseconds(1000));
    if (status == future_status::ready) // result is ready
    {
        cout << "Result = " << ftr.get() << endl;
    }

    //  timeout has expired or function has not yet been started
    else if (status == future_status::timeout || status == future_status::deferred)
    {
        cout << "Result unavailable" << endl;
    }
// Student task ENDS here    

    // thread barrier
    t.join();

    return 0;
}
