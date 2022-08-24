                //OperatorOverloadingUsingFriendFunctionexe.cpp
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void operator+(A,A);
};
 void operator+(A l,A m)
{
    cout<<"SUM"<<l.a+m.a<<l.b+m.b;
}
int main()
{
    A a(1,2);
    A a1(1,2);
    A a2=a.operator+(a1);
    return 0;   
}