#include<iostream>
using namespace std;
class CopyConstructor2
{
    int a,b;
    public:
    CopyConstructor2(){}
    CopyConstructor2(int x,int y) // parameterized consructor
    {
        a=x;
        b=y;
    }
    CopyConstructor2 (CopyConstructor2 &z)
    {
        a=z.a;
        b=z.b;
    }
    void showData()
    {
        cout<<a<<b;
    }
};
int main()
{
    CopyConstructor2 c1(1,2),c2;
    c2=c1;    
    c1.showData();
    c2.showData();
   return 0;
}