// SUM AND MEAN OF 2D ARRAY
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,i,j;
    float mean=0;
    int array[2][3]={0};
    
    //loops for entering  values into 2d array
    for(i=0;i<2;i++) //outer loop
    {
        for(j=0;j<3;j++) //inner loop
        {
            printf("Enter Values for index[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    //loops for displaying 2d array values
    printf("the Matrinx is:-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
            sum=sum+array[i][j];
        }
        printf("\n");
    }
    mean=sum/6;
    printf("\nSum=%d \n",sum);
    printf("\nMean= %f",mean);
}