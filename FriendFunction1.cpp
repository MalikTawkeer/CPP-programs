// program to understand friend function
#include<iostream>
using namespace std;
class A
{
    private:
    int a=100;
    friend void friendFunction(A); // friend function declaration
    
};
void friendFunction(A obj)
{
    int x=obj.a;
    cout<<"class A member var's value is:\t"<<x<<"\tand is accessed by friend function";
}
int main()
{
    A o;
    friendFunction(o);
    return 0;
}
