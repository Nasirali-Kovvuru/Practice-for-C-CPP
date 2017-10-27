#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class myclass
{
int empid;
char name[20];
public:
void accept()
{
cout<<"enter empid:\n";
cout<<"enter empname:\n";
}
void display()
{
cin>>empid;
cin>>name;
cout<<empid<<"\n";
cout<<name<<"\n";
}
};
void main()
{
  myclass m;
  clrscr();
  m.accept();
  m.display();
  getch();
}