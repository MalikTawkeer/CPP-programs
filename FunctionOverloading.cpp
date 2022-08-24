
//**************************FUNCTION OVERLOADING********************************************************
#include<iostream>
using namespace std;
//FUNCTION DEFINATION
int area(int,int);  //for area of rectangle
float area(int);    //for area of circle
int main()
{
    int radius;
    cout<<"ENTER RADIUS OF CIRCLE"<<endl;
    cin>>radius;
    float ac=area(radius);
    cout<<"AREA OF A CIRCLE IS :"<<ac<<endl;
    int l,b;
    cout<<"ENTER LENGATH AND BREDTH OF A RECTANGLE:"<<endl;
    cin>>l>>b;
    int ar=area(l,b);
    cout<<"AREA OF RECTANGLE:-"<<ar<<endl;
    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}
int area(int L,int B)
{
    return L*B;
}