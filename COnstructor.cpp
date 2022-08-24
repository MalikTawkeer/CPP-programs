#include<iostream>
using namespace std;
class Constructor
{
    int a,b,c;
    public:
    Constructor(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void showData()
    {
        cout<<"\tthe Data receved through constructor is:-\t"<<a<<b<<c;
    }
};
int main()
{
   Constructor cons(1,2,3);
   cons.showData();
   Constructor c2(4,5,6);
   c2.showData();
    return 0;
}