#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void func(); //function declared
};
void func()
{
    Complex::a=10;
    Complex::b=20;
}