#include<iostream>
#include <cstring>
using namespace std;
//USER DEFINED DATATYPE
//global declararion
struct Student
{
    char name[20];
    int age;
    int rollno;
    char university_name[22];
};
int main()
{
    Student student1={"malik tawkeer",24,41,"University of kashmir"};//declaration and initilization
    //Displaying student1 record
    cout<<"\n NAME OF STUDENT: \t"<<student1.name<<endl;//printing student name
    cout<<"\n STUDENT AGE IS: \t"<<student1.age<<endl;//printing student age
    cout<< "\n STUDENT ROLLNO IS: \t"<<student1.rollno<<endl;//printing student roll no
    cout<< "\n  STUDENT UNIVERSITY IS: \t"<<student1.university_name<<endl;
//****************************************************************************************************
    Student student2; // Declaration
    //initilization
    strcpy(student2.name,"salman saleem khan");
    student2.age=21;
    student2.rollno=48;
    strcpy(student2.university_name,"University of kashmir");
    cout<<"NAME:"<<student2.name;
     

    return 0;
}