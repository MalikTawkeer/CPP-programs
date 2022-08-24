//REVERSE OF AN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int temp,i,j;
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    //Displaying Values
    for(int m=0;m<6;m++)
    {
    printf("Array elements %d ",arr[i]);
    printf("\n");
    }
    return 0;
}