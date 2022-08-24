// POSTFIX PROGRAM USING C++
#include<iostream>
using namespace std;

int main()
{
    int i=10;

    //**********************************************************************
                // i++ portion
    cout << i <<endl; //printing before using ++ operator
    cout << i++ <<endl; // printing same value as initilized , Hence proved that it first assigns vale to variable then increments
    cout << i <<endl; // printing after applying ++ operator
    //***********************************************************************
                // i-- portion
    int j=10;
    cout << j <<endl; // printing before appyling -- operator
    cout << j-- <<endl; // same value
    cout << j <<endl;// printing value after applying -- operator


    return 0;
}