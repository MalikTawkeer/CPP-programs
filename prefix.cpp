#include<iostream>
using namespace std;
int main()
{
    int j=10;
                        //postfix increment
    cout << j <<endl; // printing value before appling ++ operator
    cout << ++j<<endl;//it will increment value first then prints its incremented value j=j+1 =ie 11
    //**********************************************************
                        // prefix decrement
    cout << j <<endl; // printing before appling -- operator
    cout << --j<<endl; // it will decrement value first then prints its de cremented value j=j+1 =ie 11
    return 0;
}