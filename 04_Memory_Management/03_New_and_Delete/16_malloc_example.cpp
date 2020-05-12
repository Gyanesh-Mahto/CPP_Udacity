#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *p=(int*) malloc(5*sizeof(int));
    for(int i=0; i<5; i++)
    {
        p[i]=i*i;
    }
    
    for(int i=0; i<5; i++)
    {
        cout<<"Address: "<<&p[i]<<", Value: "<<p[i]<<endl;
    }

    delete[] p;
}

/*
O/P:
-----
Address: 0x851590, Value: 0
Address: 0x851594, Value: 1
Address: 0x851598, Value: 4
Address: 0x85159c, Value: 9
Address: 0x8515a0, Value: 16
*/