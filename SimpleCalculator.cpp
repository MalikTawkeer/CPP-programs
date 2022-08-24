// Simple Calculator 
// Designed By Malik Tawkeer Ul Islam
// Date : 23/11/2021
#include<iostream>

int main()
{

    int _ist_num,_2nd_num;
    int choice;
    int sum;
    std::cout << "Enter First Number :\n";
    std::cin >>_ist_num;
    std::cout <<"Enter 2nd Number :\n";
    std::cin >>_2nd_num;
    std::cout << "\t\tEnter Choice : \n";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        sum= _ist_num + _2nd_num;
       std:: cout << "SUM = \n"<<sum;
        break;
    
    default:
        break;
    }
    return 0;
}