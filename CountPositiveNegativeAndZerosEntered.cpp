// count positive negative and zeros entered.cpp
#include<iostream>
#define SIZE 6
using namespace std;
int main()
{
    int arr[6];
    int i,j;
    int pCount=0,nCount=0,zCount=0;
    for (i=0;i<SIZE;i++)
    {
        cout<<"ENTER ENTER NUMBERS FOR ADDRESS:\t"<<&arr[i]<<endl;
        scanf("%d",&arr[i]);
    }
    //for
    for (j=0;j<SIZE;j++)
    {
        if(arr[j]==0)
        {
            zCount++;
        }
        if(arr[j]<0)
        {
            nCount=nCount+1;
        }
        if(arr[j] >= 0)
        {
            pCount=pCount+1;
        }
    }
    cout<<"Positive count is: \t"<<pCount<<endl;
    cout<<"Negative count is: \t"<<nCount<<endl;
    cout<<"Zero count is: \t"<<zCount<<endl;

    return 0;
}