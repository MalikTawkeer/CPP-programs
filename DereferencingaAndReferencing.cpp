//UNDERSTANDING REFERENCING AND DEREFERENCEING
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    printf("value of a=%d\n",a); // var 'a' used to show content of a
    printf("Address of a=%d\n",&a);//'&a' used to show address of var &a
    printf("Value at  Address &a is= %d",*&a); // showing data at address '*&a'
    return 0;

}