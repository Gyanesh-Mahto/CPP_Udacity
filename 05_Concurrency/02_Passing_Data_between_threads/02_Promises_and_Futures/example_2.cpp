#include<iostream>
#include<future>
using namespace std;

void modifyMessage(promise<string> && prms, string message)
{
    this_thread::sleep_for(chrono::milliseconds(4000)); //simulate work
    string modifiedMessage=message + " has been modified.";
    prms.set_value(modifiedMessage);
}

int main()
{
    string messageToThread="My message";
    promise<string> prms;
    future<string> ftr=prms.get_future();

    thread t(modifyMessage, move(prms), messageToThread);

    cout<<"Original message from main(): "<<messageToThread<<endl;

    string messageFromThread=ftr.get();
    cout<<"Message from thread(): "<<messageFromThread<<endl;

    t.join();
}
/*
O/P:
----
Original message from main(): My message
Message from thread(): My message has been modified.
*/