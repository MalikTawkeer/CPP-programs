//Operator Overloading Of  Insertion  And  Extraction  Operator
#include<iostream>
using namespace std;
class InOut
{
    private:
    int a,b;
    public:
    friend operator<< ;
};