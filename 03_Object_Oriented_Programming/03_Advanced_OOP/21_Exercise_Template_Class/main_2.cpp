/*
Exercise: Class Template
Classes are the building blocks of object oriented programming in C++. Templates support the creation of generic classes!

Class templates can declare and implement generic attributes for use by generic methods. These templates can be very useful when building classes that will serve multiple purposes.

In this exercise you will create a class Mapping that maps a generic key to a generic value.

All of the code has been written for you, except the initial template specification.

In order for this template specification to work, you will need to include two generic types: KeyName and ValueName. Can you imagine how to do that?

Instructions
Write the template specification.
Verify that the test passes.
*/
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

template<class T, class Y>
class Mapping
{
    map<T, Y> dict;
    int s;
    
    public:
    Mapping() : s(0)
    {
        dict.clear();
    }

    int size()
    {
        cout<<"Total No. of elements present in dictionary: "<<s<<endl;
    }

    void add(T KeyValue, Y ValueName)
    {
        s++;
        dict.insert({KeyValue, ValueName});
    }

    void print()
    {
        for(auto itr=dict.begin(); itr!=dict.end(); itr++)
        {
            cout<<itr->first<<"\t"<<itr->second<<endl;
        }
    }
};

int main()
{
Mapping<string,string> map1;
map1.add("Key", "Value");
map1.print();

Mapping<int, int> map2;
map2.add(1, 5);
map2.add(2, 10);
map2.add(3, 15);
map2.add(4, 20);
map2.add(5, 25);
map2.add(6, 30);
map2.add(7, 35);
map2.add(8, 40);
map2.print();
map2.size();
}
/*
O/P:
----
Key     Value
1       5
2       10
3       15
4       20
5       25
6       30
7       35
8       40
Total No. of elements present in dictionary: 8
*/