            //USING FRIEND FUNCTION TO ACCESS AND SUM CLASS A and CLASS B MEMBER VARIABLES
#include<iostream>
using namespace std;
class B; // formal declarition of a class
class A
{
    int a;
    public:
    void setData(int x){a=x;}
    friend void sumAB(A,B);
};
class B
{
    int b;
    public:
    void setData(int x){b=x;}
    friend void sumAB(A,B);
};
void sumAB(A x,B y)
{
    int sum=x.a+y.b;
    cout<<sum;
}
int main()
{
    A a;
    B b;
    a.setData(10);
    b.setData(13);
    sumAB(a,b);
    return 0;
}
