#include<iostream>
using namespace std;
struct Person
{
    char name;
    int rollno;
    int age;
};
Person inputPersonDetails();
void displayPersonDetails(Person);
int main()
{
   Person towkeer;
   towkeer=inputPersonDetails();
   displayPersonDetails(towkeer);
    return 0;
}
Person inputPersonDetails()
{
    Person towkeer;
    cout<<"ENTER NAME OF A PERSON:-"<<endl;
    cin>>towkeer.name;
    cout<<"ENTER ROLLNO OF A PERSON:-"<<endl;
    cin>>towkeer.rollno;
    cout<<"ENTER AGE OF A PERSON:-"<<endl;
    cin>>towkeer.age;
    return (towkeer);
}
void displayPersonDetails(Person per)
{
    cout<<"\t\t PERSON DETAILS ARE:****************"<<endl;
    cout<<"NAME is:"<<per.name<<endl;
    cout<<"ROLL NO is:"<<per.rollno<<endl;
    cout<<"AGE is:"<<per.age<<endl;    
}