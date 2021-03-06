/*
Accessor Functions
Accessor functions are public member functions that allow users to access an object's data, albeit indirectly.

const:
Accessors should only retrieve data. They should not change the data stored in the object.

The main role of the const specifier in accessor methods is to protect member data. When you specify a member function as const, the compiler will 
prohibit that function from changing any of the object's member data.

Exercise: Bank Account Class
Your task is to design and implement class called BankAccount. This will be a generic account defined by its account number, the name of the owner and 
the funds available.

Complete the following steps:

-> Create class called BankAccount
-> Use typical info about bank accounts to design attributes, such as the account number, the owner name, and the available funds.
-> Specify access so that member data are protected from other parts of the program.
-> Create accessor and mutator functions for member data.

*/
#include<iostream>
using namespace std;

class BankAccount
{
    int account_number;
    string owner_name;
    int funds;
    
    public:
    void SetAccountNumber(int a);
    void SetOwnerName(string s);
    void SetFunds(int f);
    int GetAccountNumber() const;
    string GetOwnerName() const;
    int GetFunds() const;
};

void BankAccount:: SetAccountNumber(int a)
    {
        account_number=a;
        
    }
void BankAccount:: SetOwnerName(string s)
    {
        owner_name=s;
    }
void BankAccount:: SetFunds(int f)
    {
        funds=f;
    }
int BankAccount:: GetAccountNumber() const
    {
        return account_number;
    }
string BankAccount:: GetOwnerName() const
    {
        return owner_name;
    }
int BankAccount:: GetFunds() const
    {
        return funds;
    }

int main()
{
    BankAccount Acc1;
    Acc1.SetAccountNumber(12345678);
    Acc1.SetOwnerName("Xinhua");
    Acc1.SetFunds(5000);

    cout<<"Account Number: "<<Acc1.GetAccountNumber()<<endl<<"Account Holder Name: "<<Acc1.GetOwnerName()<<endl<<"Funds: "<<Acc1.GetFunds()<<endl;
}
/*
O/P:
Account Number: 12345678
Account Holder Name: Xinhua
Funds: 5000
*/
