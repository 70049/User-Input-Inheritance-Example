#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Fruit
{
private:
    char name[30];
public:
    void setName()
    {
        fflush(stdin);
        cout<<"Enter the Fruit Name: ";
        cin.get(name,30);
    }
    void getName()
    {
        cout<<name;
    }
};
class Mango:public Fruit
{
private:
    int id;
public:
    void setId()
    {
        setName();
        cout<<"Enter the Fruit Id: ";
        cin>>id;
    }
    void getId()
    {
        cout<<"\nEntered Data is: ";
        cout<<"\n"<<"NAME"<<"     ""ID";
        cout<<"\n";
        getName();
        cout<<"     "<<id;
    }
};
int main()
{
    Mango m1;
    m1.setId();
    m1.getId();
    getch();
}
