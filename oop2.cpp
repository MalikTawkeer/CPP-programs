#include<iostream>
using namespace std;
class Box
{
    double len;
    double wid;
    public:
    
    Box(double l,double w)
    {
        len=l;
        wid=w;
    }
    void display()
    {
        double area=len*wid;
        cout << area <<endl;
    }
};
int main()
{
    Box box(10,20);
    box.display();
    cout << "inside main:"<< endl;
    return 0;
}