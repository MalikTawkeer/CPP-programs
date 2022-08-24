#include<iostream>
using namespace std;
struct Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<b;
    }
    Complex addData(Complex z)
    {
        Complex temp;
        temp.a=a+z.a;
        temp.b=b+z.b;
        return (temp);
    }
};
int main()
{
    Complex a1,a2,a3;
    a1.setData(1,2);
    a2.setData(3,4);
    a3=a1.addData(a2);
    a3.showData();
    return 0;
}