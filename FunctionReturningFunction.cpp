//FUNCTION RETURNING POINTER
#include<iostream>
using namespace std;
int *returnPointer(int *,int );
int main()
{
    int *ptr;
    int n=5,arr[]={1,2,3,4,5,6,7,8};
    ptr=returnPointer(arr,n);
    printf("Function returned=%d",*ptr);
    return 0;
}
int *returnPointer(int *p,int n)
{
    p=p+n; //here p points to first element of array
    return p;//returning p
}