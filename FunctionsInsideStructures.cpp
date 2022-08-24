#include<iostream>
using namespace std;
struct  student
{
    char name[20];
    int rollno;
    int marks;
void inputData()
{
    cout<<"ENTER STUDENT NAME,ROLLNO.,MARKS"<<endl;
    cin>>name>>rollno>>marks;
}
void displayData()
{
    cout<<"ENTERED DATA IS:"<<endl;
    cout <<name<<" "<<rollno<<" "<<marks;
}
};
int main()
{
    student s1;
    s1.inputData();
    s1.displayData();
    return 0;
}
