//OPERATOR OVERLOADING USING MINUS (-) OPERATOR
#include<iostream>
using namespace std;
class OperatorOl
{
    private:
    int a,b;
    public:
    OperatorOl()
    {

    }
    OperatorOl(int x,int y)
    {
        a=x;
        b=y;
    }
    OperatorOl operator-(OperatorOl z)
    {
        OperatorOl temp;
        temp.a=a-z.a;
        temp.b=b-z.b;
        return (temp);
    }
    void showData()
    {
        cout<<"A="<<a<<"B:"<<b;
    }
};
int main()
{
    OperatorOl obj1(3,3),obj2(3,2),obj3;
    obj3=obj1 -obj2;
    obj3.showData();
    return 0;
}