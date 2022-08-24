//MULTI LEVEL INHERITANCE
#include<iostream>
using namespace std;
class A
{
    public:
    void Show()
    {cout<<"Class A";}
};
class B:public A //class B inherited class A
{
    public:
    void Show()
    {cout<<"Class B";}
};
class C:public B
{
    public:
    void Show()
    {cout<<"Class C";}
};
int main()
{
    A a;
    a.Show();
    a.Show();
    B b;
    b.Show();
    C c;
    c.Show();
    return 0;
}