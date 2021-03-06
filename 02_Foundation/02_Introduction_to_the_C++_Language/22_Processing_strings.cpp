/* Streaming ints from a string with istringstream

In C++ strings can be streamed into temporary variables,
similarly to how files can be streamed into strings. 
Streaming a string allows us to work with each character individually.

One way to stream a string is to use an input string stream object
istringstream from the <sstream> header.

Once an istringstream object has been created, parts of the string
can be streamed and stored using the "extraction operator": >>.
The extraction operator will read until whitespace is reached or until the stream fails.
Execute the following code to see how this works:

*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void istringstream_test()
{
    cout<<__func__<<endl;
    string a("1 2 3");
    istringstream my_stream(a);
    int n;
    my_stream>>n;
    cout<<n<<endl;
}

void istringstream_as_boolean_read_all()
{
    cout<<__func__<<endl;
    string b("1 2 3");
    istringstream my_stream(b);

    // Testing to see if the stream was successful and printing results.
    int n;
    while(my_stream)
    {
    my_stream>>n;
    if(my_stream)
    cout<<"Streaming was successfull: "<<n<<endl;
    else
    cout<<"That stream was not successful"<<endl;
    }
}

void common_way_to_read_string_in_while()
{
    cout<<__func__<<endl;
    istringstream myreader("1 2 3");
    /*
    myreader is a pointer, whith point to the contain of string.
    if the current pointer READ(>>) the non-number or error or endoffile
    the myreader will return error or 0 or false

    every time you extract a contain, the myrerader will move right to next contain.
    */

    int n;
    while(myreader>>n)
    {
        cout<<"read: "<<n<<endl;
    }
    cout<<"The stream has failed or ended"<<endl;
}

void string_with_MIX_TYPES()
{
    /*
    In the stream example above, the string contained only whitespaces
    and characters which could be converted to ints.

    If the string has mixed types, more care is needed to process the string.
    In the following example,
    the type char is used, which is a type that can hold only a single ASCII character.
    */

    cout << __func__<< "\n";
    string b("1,2,3,4,6q7p8o9");
    istringstream mixstring(b);
    char c;
    int n;
    while(mixstring>>n>>c)
    {
        cout<<"read int: "<<n<<" "<<"read char: "<<c<<endl;
    }
    cout<<"The string is failed or ended"<<endl;
}

/*
        !! notice that the 9 was not printed

        mixstring >> n >> c

        tried to stream an int followed by a char.
        Since there was no char after the 9, the stream
        failed and the while loop exited.
    */


int main()
{
    istringstream_test();
    istringstream_as_boolean_read_all();
    common_way_to_read_string_in_while();
    string_with_MIX_TYPES();
}

/*
istringstream_test
1
istringstream_as_boolean_read_all
Streaming was successfull: 1
Streaming was successfull: 2
Streaming was successfull: 3
That stream was not successful
common_way_to_read_string_in_while
read: 1
read: 2
read: 3
The stream has failed or ended
string_with_MIX_TYPES
read int: 1 read char: ,
read int: 2 read char: ,
read int: 3 read char: ,
read int: 4 read char: ,
read int: 6 read char: q
read int: 7 read char: p
read int: 8 read char: o
The string is failed or ended
*/