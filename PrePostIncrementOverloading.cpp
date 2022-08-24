#include<iostream>
using namespace std;
class PostPreIncrementOL
{
    int i=0;
    public:
    PostPreIncrementOL(){}
    PostPreIncrementOL(int a)
    {
        i=a;
    }  
    void showData()
    {
        cout<<"I="<<i;
    }
    PostPreIncrementOL operator++()
    {
        PostPreIncrementOL temp ;
        temp.i=++i;
        return (temp);
    }
    PostPreIncrementOL operator ++(int)
    {
        PostPreIncrementOL temp;
        temp.i=i++;
        return (temp);
    }
};
int main()
{
    PostPreIncrementOL obj1,obj2;
    obj2=obj1 ++; //postincrement ovr func. call
    obj1.showData();
    obj2.showData();
    obj2=++obj1;
    cout<<"\nPre-increment";
    obj1.showData();
    obj2.showData();
    return 0;
}