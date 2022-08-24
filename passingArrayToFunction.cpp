//PASSING ARRAY TO FUNCTION
#include<iostream>
using namespace std;
void displayArrayElements(int arr[]);
int main()
{
    int arr[5]={1,2,3,4,5};
    displayArrayElements(arr);
    return 0;
}
void displayArrayElements(int a[])
{
    int i;
    for(i=0;i<5;i++)
    printf("%d",a[i]);
}