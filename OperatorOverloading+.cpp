//OPERATOR OVERLOADING USING PLUS (+) OPERATOR
#include<iostream>
using namespace std;
class OperatorOlPlus
{
    int a,b;
    public:
    OperatorOlPlus(){}
    OperatorOlPlus(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void showData()
    {
        cout<<"A="<<a<<"\tB="<<b;
    }
    OperatorOlPlus operator+(OperatorOlPlus z)
    {
        OperatorOlPlus temp;
        temp.a=a+z.a;
        temp.b=b+z.b;
        return (temp);
    }
};
int main()
{
    OperatorOlPlus c1(1,2),c2(3,4),c3;    
    c3=c1+c2;
    c3.showData();
   return 0;
}
