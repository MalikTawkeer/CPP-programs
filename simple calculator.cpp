// Simple Calculator 
// Designed By Malik Tawkeer Ul Islam
// Date : 23/11/2021
#include<iostream>

int main()
{

    int _ist_num,_2nd_num;
    int choice;
    int sum;
    cout << "Enter First Number :\n"<<;
    cin >>_ist_num;
    cout <<"Enter 2nd Number :\n";
    cin >>_2nd_num;
    cout << "\t\tEnter Choice : \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        sum= _ist_num + _2nd_num;
        cout << "SUM = \n"<<sum;
        break;
    
    default:
        break;
    }
}