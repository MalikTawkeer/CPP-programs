//OPERATOR OVERLOADING USING MULTILICATION (*) OPERATOR
#include<iostream>
using namespace std;
class OperatiorOLMulti
{
    int a,b;
    public:
    OperatiorOLMulti(){}
    OperatiorOLMulti(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"A="<<a<<"\tB="<<b;
    }
    OperatiorOLMulti operator*(OperatiorOLMulti z)
    {
        OperatiorOLMulti temp;
        temp.a=a*z.a;
        temp.b=b*z.b;
        return (temp);
    }
};
int main()
{
    OperatiorOLMulti obj1(1,2),obj2(2,3),obj3;
    obj3=obj1*obj2;
    obj3.showData();
    return 0;
}