// COnditional operator Usage
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=10,b=10;
    bool flag;
    // this will check is a == b if yes then true else false
    flag = (a==b)?(true):(false);
    //checks value of flag if true then yes if false then no
    if(flag == true)
    {
        cout << "yes they are equal"<<endl;
    }else if(flag == false)
    {
        cout << "not equal" <<endl;
    }
    
   return 0;
}