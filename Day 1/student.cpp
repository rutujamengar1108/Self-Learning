#include<iostream>
using namespace std;

class Student
{
    private :
    int rollNo;
    string name;
    float marks;

    public:
    Student( int r,string n,float m)
{
     rollNo=r;
     name=n;
     marks=m;
}
void display()
{
     cout<<"roll no is"<<rollNo<<endl;
    cout<<"Name is"<<name<<endl;
    cout<<"Marks is"<<marks<<endl;
}
};

int main()
{
    Student s1(1,"Rutuja",90.67);
    Student s2(2,"Divyani",84.20);
    Student s3(3,"Uma",74.35);
    Student s4(4,"Prashant",68.47);
    Student s5(5,"Manish",94.56);
    Student s6(6,"Gauri",78.21);
    Student s7(7,"Maya",86.87);
    Student s8(8,"Goraksh",69.80);
    Student s9(9,"Neha",80.30);
    Student s10(10,"Rohit",99.99);
 
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();
    s7.display();
    s8.display();
    s9.display();
    s10.display();

    }





