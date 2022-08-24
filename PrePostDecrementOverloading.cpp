//PREPOST DECREMENT OPERATOR OVERLOADING
#include<iostream>
using namespace std;
class PrePostDecrement
{
    int z=2;
    public:
    PrePostDecrement(){}

    void setData(int a)
    {
        z=a;
    }
    void showData()
    {
        cout<<" "<<z;
    }
    PrePostDecrement operator--() //pre decrement function
    {
        PrePostDecrement temp;
        temp.z=--z;
        return (temp);
    }
     PrePostDecrement operator--(int) //post decrement function
    {
        PrePostDecrement temp;
        temp.z=z--;
        return (temp);
    }
};
int main()
{
    PrePostDecrement c1,c2;
    c2=--c1;
    c1.showData();
    c2.showData();
    cout<<"\n\tpost decrement:";
    c2=c1--;
    c1.showData();
    c2.showData();
    return 0;
}