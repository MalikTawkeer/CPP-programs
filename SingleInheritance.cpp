// C++ PROGRAM TO UNDERSTAND SINGLE INHERITANCE
#include<iostream>
using namespace std;
class A
{
    private:
    int a,b;
    public:
    void setData(int x,int y){a=x;b=y;}
    void showData(){cout<<a<<b;}
};
class B:public A // class A is inherited into class B
{
    int a1,b1;
    public:
    void setValue(int l,int m){setData(l,m);}
};
int main()
{
    B b;
    b.setData(1,2);
    b.showData();
    return 0;
}