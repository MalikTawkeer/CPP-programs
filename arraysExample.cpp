#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    int sum;
    //Writing values into an array arr
    for (int i=0;i<4;i++)
    scanf("%d",&arr[i]);
    //Displaying array elements
    printf("\n\tDISPLAYING VALUES OF AN ARRAY ARR:\n");
    for(int j=0;j<4;j++)
    printf("%d\t",arr[j]);
    // Adding values of an array
    printf("\n\t:ADDING VALUES OF AN ARRAY:\n");
    for(int l=0;l<4;l++)
    sum+=arr[l];
    printf("\n%d",sum);

    return 0;
}