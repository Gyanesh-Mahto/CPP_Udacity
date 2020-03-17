#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /* For Loop with an Index Variable */
    for(int i=0; i<=5; i++)
    cout<<i<<" ";
    cout<<endl;
    //O/P: 0 1 2 3 4 5

    /* For Loop with a Container */
    // C++ offers several ways to iterate over containers. 
    // One way is to use an index-based loop as above. 
    // Another way is using a "range-based loop", which you will see frequently in the rest of this course.
    auto i=0;
    vector<int> v1{1,2,3,4,5};
    for(auto i:v1)
    cout<<i<<" ";
    cout<<endl;
    //O/P: 1 2 3 4 5
}