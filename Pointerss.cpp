//Printing array elements and its addresses 
#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,3,4,5};
   int i;
   for(i=0;i<5;i++)
   {
       printf("Array element at arr[%d]\tis %d\t\t",i,arr[i]);
       printf("Address is =%p\n",&arr[i]);
   }
}