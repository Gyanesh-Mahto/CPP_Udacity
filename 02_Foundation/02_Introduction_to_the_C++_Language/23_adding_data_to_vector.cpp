/*

Vector push_back

Now that you are able to process a string, you may want to store the results of the processing in a convenient container for later use.
In the next exercise, you will store the streamed ints from each line of the board in a vector<int>.
To do this, you will add the ints to the back of the vector, using the vector method push_back:
*/
/////////////////////
// push_back(data)
/////////////////////
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Initial Vector
    vector<int> v1{1,2,3};
    //Printing the elements of vector v1
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //Adding the element in vector V1 at the end
    v1.push_back(4);

    //Again printing the elements of vector v1
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}