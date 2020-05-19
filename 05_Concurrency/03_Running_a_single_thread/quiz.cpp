#include <iostream>
#include <thread>
using namespace std;

/* Student Task START */
void thread_func_even()
{
    this_thread::sleep_for(chrono::milliseconds(1));
    cout<<"Finished Task in even thread"<<endl;
}

void thread_func_odd()
{
    this_thread::sleep_for(chrono::milliseconds(1));
    cout<<"Finished Task in odd thread"<<endl;
}
/* Student Task END */

int main() {
  /* Student Task START */
  for(int i=0; i<6; i++)
  {
      if(i%2==0)
      {
      thread t(thread_func_even);
      t.detach();
      }

      else
      {
          thread t(thread_func_odd);
          t.detach();
      }
      
  }
  /* Student Task END */

  // ensure that main does not return before the threads are finished
  this_thread::sleep_for(chrono::milliseconds(1));
  cout << "End of main is reached" << endl;
  return 0;
}

/*
For Linux Environment:
-->Compile with command: g++ -std=c++11 -pthread ./quiz.cpp
-->./a.out

For Windows Environment:
-->Compile with command: g++ -std=c++11 ./quiz.cpp
-->./a.out

O/P is not fixed
Finished Task in even thread
Finished Task in odd thread
Finished Task in even thread
Finished Task in odd thread
Finished Task in odd thread
Finished Task in even thread
End of main is reached
*/