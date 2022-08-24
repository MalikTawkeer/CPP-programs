//USE OF extern KEYWORD
#include<iostream>
using namespace std;
void externExperiment(void);
int a=2;
int main()
{
   
    externExperiment();
    return 0;
}

void externExperiment()
{
   int a=1;
    cout<<a;
}