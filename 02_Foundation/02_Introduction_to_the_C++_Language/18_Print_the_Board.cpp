/*
TODO: Write a void PrintBoard function. The function should accept the board as an argument. 
The function should print each row of the board with a newline "\n".
When you have written your PrintBoard function, call it from within main() to print the board.
*/

#include<iostream>
#include<vector>
using namespace std;

void PrintBoard(vector<vector<int>>b)
{
    int row=b.size();
    int col=b[0].size();
   for(int i=0; i<row; i++)
   {
       for(int j=0; j<col; j++)
       {
           cout<<b[i][j];
       }
       cout<<"\n";
   }
}

int main()
{
    // TODO: Declare a "board" variable here, and store
    // the data provided above.
    vector<vector<int>> board;
    board={{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 0, 0, 0, 1, 0}};
    PrintBoard(board);
}
/*
O/P:
010000
010000
010000
010000
000010
*/