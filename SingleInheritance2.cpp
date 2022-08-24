// C++ PROGRAM TO UNDERSTAND IF VISIBILITY MODE IS private
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void setData(int l,int m){a=l;b=m;}
    void showData(){cout<<a<<b;}
};
class B:private A
{
    int x,y;
    public:
    void setVal(int a,int b){setData(a,b);}
    void showVal(){showData();}
};
int main()
{
    B b;
    b.setVal(44,33);
    b.showVal();
    return 0;
}