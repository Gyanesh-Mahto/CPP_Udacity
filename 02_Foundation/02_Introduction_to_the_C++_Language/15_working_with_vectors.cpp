#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ////////////////////////
    ////////1D Vector///////
    ///////////////////////
    
    vector<int> v1{1,2,3,4,5};
    cout<<v1[0]<<endl;  //1
    cout<<v1[1]<<endl;  //2
    cout<<v1[2]<<endl;  //3
    cout<<v1[3]<<endl;  //4
    cout<<v1[4]<<endl;  //5

   //////////////////////////
   //////2D Vector///////////
   //////////////////////////

    vector<vector<int>> v2{{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    cout<<v2[0][0]<<endl;    //1
    cout<<v2[3][0]<<endl;    //4
    cout<<v2[2][2]<<endl;    //5
    cout<<v2[1][1]<<endl;    //3
    cout<<v2[2][3]<<endl;    //6

    //vector size
    cout<<v1.size()<<endl;  //5
    cout<<v2.size()<<endl;  //4
    cout<<v2[0].size()<<endl;   //4

}