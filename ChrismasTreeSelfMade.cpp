#include<stdio.h>
#include<conio.h>
void trangle(int);
void pole(int);
int main()
{
    int n;
    printf("Enter No. of Lines");
    scanf("%d",&n);
    trangle(n);
    trangle(n);
    pole(n);
    return 0;
    
}
void trangle(int a)
{
    int i,j;
    //for spacing
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
        
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pole(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-2; j++)
        {
            printf(" ");
        }
        printf("***\n");
    }
}