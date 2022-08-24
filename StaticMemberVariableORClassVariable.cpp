#include<iostream>
using namespace std;
class Account
{
    private:
    int balance;// Member Variable
    static int RATE_OF_INTREST; // Static Member Variable / Class Variable
    public:
    void setBal(int bal)
    {
       balance=bal;
    }
    void showBal()
    {
        cout<< "\t\t\t\t\t\t ACCOUNT BALANCE Rs. "<<balance;
    }
};

    // INITILIZING AND CREATING CLASS VARIABLE ' :: ' is SCOPE RESOLUTION OPERATOR  ' Account:: ' is membership label
int Account:: RATE_OF_INTREST=7;

int main()
{
    Account account;
    account.setBal(2000);
    account.showBal();
    return 0;
}