// LOAD INTEGERS FROM 0 THROUGH 99
#include<iostream>
using namespace std;
int main()
{
    int arr[100];//declaring array
    int i; //USED FOR ITERATION
    // PUTTING NUMBE4RS FROM
    for (i = 0; i < 100; ++i)
    {
        arr[i]=i;
    }
    // SHOWING ARRAY DATA
    for(i=0;i<100;i++)
    {
        printf("\t");
        cout<<arr[i];
    }
    
    return 0;
}