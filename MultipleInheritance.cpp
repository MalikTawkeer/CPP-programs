// Multiple inheritance
#include<iostream>
using namespace std;
class A
{
     public:
    void Show1()
    {cout<<"Class A";}
};
class B
{
     public:
    void Show2()
    {cout<<"Class B";}
};
class C:public A,public B
{

};
int main()
{
    C c;
    c.Show1();
    c.Show2();
    return 0;
}