#include<stdio.h>
#include<conio.h>
void checkEvenOdd(int); //prototype

int main()
{
    int array[10],i;

    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
        checkEvenOdd(array[i]);
    }
    return 0;
}

void checkEvenOdd(int num)
{
    if(num%2 == 0)
    {
        printf("number is even \n");
    }
    else
    {
        printf("number is odd \n");
    }
}