#include<iostream>
using namespace std;
int main()
{
    int a=12,b=13;
    int *p,*q;
    p=&a;
    q=&b;
    printf("before %d %d",*p,*q);
    printf("put New Values into a , b  using pointers");
    scanf("%d %d",p,q); // scanf("%d %d",&a,&b);
    printf("After %d %d",a,b); 

    return 0;
}