//pointer basics
#include<iostream>
using namespace std;
int main()
{
    int x=12,*y;
    y=&x;
    printf("%d %u\n",x,y);
    printf("%d %u\n",x,*y);
    printf("%d",*&x);
    return 0;

}