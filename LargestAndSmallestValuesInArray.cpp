//LARGEST AND SMALLEST VALUES IN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int i,arr[6];
    int smallest,largest;
    for(int i=0;i<6;i++)
    {
    printf("Enter value of [%d]",i);
    scanf("%d",&arr[i]);
    }
    smallest=largest=arr[0];
    //Checking for large and small
    for(i=1;i<6;i++)
    {
        if(arr[i]<smallest)
        smallest=arr[i];
        if(arr[i]>largest)
        largest=arr[i];
    }
    printf("Smallest is %d And \t largest is %d",smallest,largest);
}