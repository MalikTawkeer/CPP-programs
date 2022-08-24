#include<iostream>
using namespace std;
class Complex
{
    private:
    int a, b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<< a<<""<<+b;
    }
    Complex addData(Complex z)
    {
        Complex temp;//to be returned to c3 obj
        temp.a=a+z.a;
        temp.b=b+z.b;
        return(temp);
    }

};
int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(4,5);
    c3=c1.addData(c2);
    c3.showData();
    return 0;
}