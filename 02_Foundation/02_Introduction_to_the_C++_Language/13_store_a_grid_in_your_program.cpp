/*
In the main function, declare a variable board as a vector of vectors of ints: vector<vector<int>>.
Assign this data to the board variable:
{{0, 1, 0, 0, 0, 0},
 {0, 1, 0, 0, 0, 0},
 {0, 1, 0, 0, 0, 0},
 {0, 1, 0, 0, 0, 0},
 {0, 0, 0, 0, 1, 0}}
Note: you will need to include the vector library, just as iostream is included.
You will also need to use the namespace std::vector if you want to write vector rather than std::vector in your code.
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // TODO: Declare a "board" variable here, and store
    // the data provided above.
    vector<vector<int>> board;
    board={{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 0, 0, 0, 1, 0}};
}