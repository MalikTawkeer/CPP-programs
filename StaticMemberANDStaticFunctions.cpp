//initilizing static member before object creation
#include<iostream>
using namespace std;
class Static_type
{
    private:
    static int i; // Declaring static class variable
    //creating static function to initilize data into above static class variable
    public:
    static void init_i(int a)
    {
        i=a;
    }
 static void show()
    {
        cout <<"\nthe value of i is:-\t\n"<<i;
    }
};
int Static_type:: i;
int main()
{
    Static_type::init_i(12); //calling and sending data throungh static init_i() func.
    Static_type::show(); //showing data  using static show() func.
    //ANOTHER WAY OF SHOWING DATA IS CREATING OBJ
    Static_type obj;
    obj.show();
    return 0;
}