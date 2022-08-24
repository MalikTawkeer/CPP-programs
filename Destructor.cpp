#include<iostream>
using namespace std;
class DestructorExample
{
    int a;
    public:
    DestructorExample(int x)
    {
        a=x;
    }
    ~DestructorExample()
    {
        cout<<"Destructor is called hence resources relaeased";
        cout<<a;
    }
};

int main()
{
    DestructorExample d1(1);
    return 0;
}