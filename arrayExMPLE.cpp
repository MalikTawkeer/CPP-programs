// PASSING ARRAY IN FUNCTION PARAMATER IN MANY WAYS
#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int arr[3];
    arr[0]=1;
    arr[1]=2;
    arr[0/2]=23;
    printf("%d",arr[1]);
    return 0;
} 
