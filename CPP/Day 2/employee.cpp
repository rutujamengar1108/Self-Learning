#include<iostream>
using namespace std;
string company="Infosys Technology";
class employee
{
    private :
    int empId;
    string name;
    double salary;

    static int totalEmployees;

    public:
      employee(int i , string n, double s)
      {
        empId=i;
        name=n;
        salary=s;
        totalEmployees++;
      }

      void display()
      {
        cout<<"Company Name :"<<company<<endl;
        cout<<"Employee Id : "<<empId<<endl;
        cout<<"Name :" <<name<<endl;
        cout<<"Salary :"<<salary<<endl;
        cout<<"----------------------"<<endl;
      }
      static void showTotalEmployees()
      {
        cout<<"Total Employee Created : "<<totalEmployees<<endl;
      }
};
      int employee::totalEmployees=0;

      int main()
      {
        employee e1(101, "Rutuja" , 60000);
         employee e2(101, "Rutuja" , 60000);
          employee e3(101, "Rutuja" , 60000);
           employee e4(101, "Rutuja" , 60000);
            employee e5(101, "Rutuja" , 60000);

            e1.display();
            e2.display();
            e3.display();
            e4.display();
            e5.display();

            employee::showTotalEmployees();
            return 0;

      }
    