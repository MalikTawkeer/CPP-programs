#include<iostream>
using namespace std;
class ObjCounter
{
    public:
    static int counter;
    public:
    ObjCounter()
    {
        counter++;
    }
};
int ObjCounter:: counter;
int main()
{
    ObjCounter obj1;
    ObjCounter obj2;
    ObjCounter obj3;
    ObjCounter obj4;
    cout<<"OBJECTS IN EXISTENCE:-\t\t"<<ObjCounter:: counter;

    return 0;
}