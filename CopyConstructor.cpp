#include<iostream>
using namespace std;
class CopyConstructor
{
    private:
    int a,b;
    public:
    CopyConstructor(int x1,int x2)
    {
        a=x1;
        b=x2;
        cout<<"constructor called";
    }
    CopyConstructor(CopyConstructor &c)
    {
        a=c.a;
        b=c.b;
        cout<<"###constructor2222called";
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    
};
int main()
{
    CopyConstructor c1(1,2);
    CopyConstructor c2=c1;
    return 0;
}