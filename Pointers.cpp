#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int *a1=&a;
    int *b1=&b;
    printf("Address of a=%p\n",a1);
    printf("Address of b=%p\n",b1);
    printf("Address of a1=%p",&a1);
    printf("Adress of b1=%p",&b1);
    printf("\nValue of a=%d",*a1);
    printf("\nValue of b=%d",*b1);
    return 0;
}