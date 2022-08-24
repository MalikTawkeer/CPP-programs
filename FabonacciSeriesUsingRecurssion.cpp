//FABONACCI SEROES USING RECURSSION
#include<iostream>
using namespace std;
void printFabonacciSeries(int);
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d",&number);
    printf("%d %d",0,1);
    printFabonacciSeries(number-2);
    return 0;
}
void printFabonacciSeries(int n)
{
    int n1=0,n2=1,n3;
    
    if(n>0)
    {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d",n3);
    printFabonacciSeries(n-1);
    }
}