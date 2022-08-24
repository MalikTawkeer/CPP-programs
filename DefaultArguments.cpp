
//**********************************DEFAULT-ARGUMENTS*******************************************
#include<iostream>
using namespace std;
int sum(int,int=0,int=0);
int main()
{
    int z;
    cout<<"\n ENTER VALUE OF z:-";
    cin>>z;
    cout<<"sum is:"<<sum(z); //// PASSING ONE ARGUMENT BUT FUNC DEL IS OF 3

//**************************************************************************************************************
    int a,b;
    cout<<"\n ENTER VALUE OF a AND b:- \t";
    cin>>a>>b;
    cout<<"SUM="<<sum(a,b); // PASSING TWO ARGUMENTS BUT FUNC DEL IS OF 3

//******************************************************************************************************
    int c;
    cout<<"\nENter value of c:-";
    cin>>c;
    cout<<"Sum is :-\t"<<sum(a,b,c); //PASSING 3 ARGUMENTS


    return 0;
}
int sum(int A,int B,int C)
{
    return A+B+C;
}