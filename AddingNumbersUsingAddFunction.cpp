#include<iostream>
using namespace std;
class Compute
{
    private:
    int a,b;
    public:
    Compute()// DEFAULT COMSTRUCTOR
    {

    }
    Compute(int A,int B) // PARAMETERIZED CONSTRUTOR
    {
        a=A;
        b=B;
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"A="<<a<<"B="<<b;

    }
    Compute addData(Compute c)
    {
        Compute temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }
    
};
int main()
{
    int MALIK=0;
    Compute c1,c2,c3;
    c1.setData(1,2);
    c2.setData(2,3);
    c3=c1.addData(c2);
    c3.showData();
    return 0;
}