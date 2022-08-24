        //Returning More Than One Values From Function Using Call By Reference
#include<iostream>
using namespace std;
void calculateSumDiffProduct(int a,int b,int *s,int *d,int *p);
int main()
{
    int a=10,b=5,sumation,difference,product;
    calculateSumDiffProduct( a , b , &sumation , &difference , &product );
    printf("Sum of a and b=%d\n",sumation);
    printf("difference of a and b=%d\n",difference);
    printf("product of a and b=%d\n",product);
    return 0;
}
void calculateSumDiffProduct(int a,int b,int *s,int *d,int *p)
{
    *s=a+b;   
    *d=a-b;
    *p=a*b;
}