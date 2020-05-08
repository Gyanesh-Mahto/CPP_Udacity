#include<iostream>
using namespace std;

int main()
{
    int *p=new int(23);
    int *arr_p=new int[4];
    for(int i=0; i<4; i++)
    {
        *p=++*p;
        cout<<"Address of p: "<<p<<", "<<"Value of p: "<<*p<<endl;
        cout<<"Address of arr_p: "<<arr_p<<", "<<"Value of arr_p: "<<arr_p[i]<<endl;
    }
    delete p;
    delete[] arr_p;
}
/*
O/P:
Address of p: 0xe95c20, Value of p: 24
Address of arr_p: 0xe95c40, Value of arr_p: 0
Address of p: 0xe95c20, Value of p: 25
Address of arr_p: 0xe95c40, Value of arr_p: 0
Address of p: 0xe95c20, Value of p: 26
Address of arr_p: 0xe95c40, Value of arr_p: 0
Address of p: 0xe95c20, Value of p: 27
Address of arr_p: 0xe95c40, Value of arr_p: 0
*/