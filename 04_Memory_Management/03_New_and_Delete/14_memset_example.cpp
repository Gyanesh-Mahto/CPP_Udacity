#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char *p=new char('C');
    char str[4]="AAA";

    cout<<"Before Value: "<<*p<<endl;
    cout<<"Before Value: "<<str<<endl;

    memset(p, 'B', 1);
    memset(str+1, 'B', 1);

    cout<<"After Value: "<<*p<<endl;
    cout<<"After Value: "<<str<<endl;

    memset(p, 'A', 1);
    memset(str+1, 'B', 2);

    cout<<"After Value: "<<*p<<endl;
    cout<<"After Value: "<<str<<endl;
}
/*
O/P:
----
Before Value: C
Before Value: AAA
After Value: B
After Value: ABA
After Value: A
After Value: ABB
*/