#include <iostream>
using namespace std;

int main() {
  int id = 0;  // Define an integer variable

  // capture by reference (immutable)
  auto f0=[&id](){cout<<"a) ID in lambda: "<<id<<endl;};    //Defining lambda function: f0

  // capture by value (mutable)
  auto f1=[id]()mutable{cout<<"b) ID in lambda: "<<++id<<endl;};    //Defining lambda function: f1

  // call the closure and execute the code witin the Lambda
  f1();
  cout<<"c) ID in main: "<<id<<endl;

  // capture by reference (mutable)
  auto f2=[&id]()mutable{cout<<"d) ID in lambda: "<<++id<<endl;};    //Defining lambda function: f2

  f2();
  cout<<"e) ID in main: "<<id<<endl;

  // pass parameter
  auto f3=[](const int id){cout<<"f) ID in lambda: "<<id<<endl;};    //Defining lambda function: f3
  f3(++id);

  // observe the effect of capturing by reference at an earlier point in time
  f0();
}

/*
O/P:
----
b) ID in lambda: 1
c) ID in main: 0
d) ID in lambda: 1
e) ID in main: 1
f) ID in lambda: 2
a) ID in lambda: 2
*/