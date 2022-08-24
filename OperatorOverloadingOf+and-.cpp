//THIS PROGRAM IS DESIGNED TO OVERLOAD OPERATORS OR ACHIEVING POLYMORPHISM
#include<iostream>
#include<conio.h>
using namespace std;
class OperatorOverloadingOfPlusAndMinus
{
    private:
    int a,b;
    public:
    OperatorOverloadingOfPlusAndMinus();
    OperatorOverloadingOfPlusAndMinus(int A,int B)
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
        cout<<"A's value is:"<<a<<"\tB's value is:"<<b;
    }
    OperatorOverloadingOfPlusAndMinus operator+ (OperatorOverloadingOfPlusAndMinus z)
    {
        OperatorOverloadingOfPlusAndMinus temp;
        temp.a=a+z.a;
        temp.b=b+z.b;
        return (temp);
    }
};
int main()
{
    OperatorOverloadingOfPlusAndMinus obj1(1,2),obj2(1,2),obj3;
    obj3=obj1 + obj2;
    obj3.showData();
    return 0;
}