#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person
{
private:
    char name[50];
    int age;
public:
    void setName()
    {
        fflush(stdin);
        cout<<"Enter the Employee Name: ";
        cin.get(name,50);
        cout<<"Enter the Employee Age: ";
        cin>>age;
    }
    void getName()
    {
        cout<<endl<<name<<"    "<<age;
    }
};
class Employee:public Person
{
private:
    float salary;
public:
    void setSalary()
    {
        setName();
        cout<<"Enter the Employee Salary: ";
        cin>>salary;
        cout<<"\n\n\n"<<"Entered Employee Data is:\n";
        getName();
        cout<<"   "<<salary;
    }
    /*void getData()
    {
        //setName();
        //setSalary();
        cout<<"\n\n\n"<<"Entered Employee Data is:\n";
        getName();
        cout<<"   "<<salary;
    }*/
};
int main()
{
    Employee e;
    e.setSalary();
    //e.getData();
    getch();
}
