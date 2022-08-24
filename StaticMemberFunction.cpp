// STATIC MEMBER FUNCTION PROGRAM:
#include<iostream>
using namespace std;
class Acc
{
    private:
    int bal;
    static float RATE_OF_INTREST;
    public:
    static void setRateOFIntrest(float roi) // static member function to set ROI
    {
        RATE_OF_INTREST=roi;
    }
    static void showROI() // static member funtion to show ROI
    {
        cout<<RATE_OF_INTREST;
    }
};
float Acc:: RATE_OF_INTREST=7.7f;
int main()
{
    Acc:: setRateOFIntrest(6.6f);//calling static mdember func to set rate of intrest 
    Acc:: showROI();//calling static function to show the rate of intrest
    return 0;
}
