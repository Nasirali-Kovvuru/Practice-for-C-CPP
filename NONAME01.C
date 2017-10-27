#include<stdio.h>
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