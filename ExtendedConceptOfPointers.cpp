//EXTERNDED CONCEPT OF POINTERS 
#include<iostream>
using namespace std;
int main()
{
    int a=12,*p,**q,***r;
    p=&a;
    
    printf("Address of pointer:=%d\n",*p);// print value at location pointed by *p
    printf("Address pointed by *P %d\n",p);//print address of location pointed by *p
    printf("Address of *p %d\n",&p);//print address of *p 

    return 0;
}