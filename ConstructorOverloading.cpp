                        //CONSTRUCTOR OVERLOADING EXAMPLE
#include<iostream>
using namespace std;

class ConstructorOverloading
{
    public:
    int a=0,b=0,c=0;
    public:
    ConstructorOverloading(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    ConstructorOverloading(int x,int y)
    {
        a=x;
        b=y;
    }
    ConstructorOverloading(int x)
    {
        a=x;
    }
    ConstructorOverloading()
    {

    }
    void showObj1()  //OBJECT 1
    {
        cout<<"SHOWING OBJECT 1\n";
        cout<<a<<b<<c<<"\n";
    }

    void showObj2()  //OBJECT 2
    {
        cout<<"SHOWING OBJECT 2\n";
        cout<<a<<b<<"\n";
    }

    void showObj3() //OBJECT 3
    {
        cout<<"SHOWING OBJECT 3\n";
        cout<<a<<"\n";
    }

    void showObj4() // OBJECT 4
    {
        cout<<"SHOWING OBJECT 4\n";
        cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
    }
};

int main()
{
    ConstructorOverloading obj1(1,2,3); // OBJECT 1
    obj1.showObj1();
    ConstructorOverloading obj2(1,2);   //OBJECT 2
    obj2.showObj2();
    ConstructorOverloading obj3=990;    //OBJECT 3//ANOTHER WAY OF PASSING VALUE IN CASE OFSINGLE ARGUMENT
    obj3.showObj3();
    ConstructorOverloading obj4;      //OBJECT 4
    obj4.showObj4();

    return 0;
}
