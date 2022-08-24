// Fabonacii series using for loop
#include<iostream>
using namespace std;
int main()
{
    int n0=0,n1=1,n3,i,number;
    printf("Enter number :");
    scanf("%d",&number);
    printf("\n%d%d",n0,n1);
    for(i=2;i<number;i++)
    {
        n3=n0+n1;
        printf("%d",n3);
        n0=n1;
        n1=n3;
    }
    return 0;
}