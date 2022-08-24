#include<iostream>
using namespace std;
int main()
{
    int a=10,*p,**q,***r;
    //Putting address of 'a' in p , q, and r
    p=&a;
    q=&p;
    r=&q;
    //putting value in a using *p
    *p=20;
    cout<<*p<<endl;
    //putting value in a using **q
    **q=30;
    cout<<**q<<endl;
    //putting value in a using ***r
    ***r=40;
    cout<<***r<<endl;
    return 0;
}