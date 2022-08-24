//COPY ELEMENTS OF ONE ARRAY INTO ANOTHER ARRAY USING A FOR LOOP
#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4};
    int arr2[4]={0};
    
    // Copying elements
    for (int i=0;i<4;i++)
    {
        arr2[i]=arr1[i];
    }
    //Displaying elements of arr2
    for(int i=0;i<4;i++)
    printf("%d",arr2[i]);
    return 0;
}