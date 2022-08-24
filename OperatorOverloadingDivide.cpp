//OPERATOR OVERLOADING USING DIVIDE OPERATOR /
#include<iostream>
using namespace std;
class OperatorOLDivide
{
    float a,b;
    public:
    OperatorOLDivide(){}
    OperatorOLDivide(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"A="<<a<<"\t\tB="<<b;
    }
    OperatorOLDivide operator/(OperatorOLDivide z)
    {
        OperatorOLDivide temp;
        temp.a=a/z.a;
        temp.b=b/z.b;
        return (temp);
    }
};
int main()
{
    OperatorOLDivide c1(1,6),c2(2,5),c3;
    c3=c1/c2;
    c3.showData();

    return 0;
}