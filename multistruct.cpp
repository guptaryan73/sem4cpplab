#include<iostream>
using namespace std;

struct student 
{
    char name[100];
    int rollno[100];
};

int main () 
{
 student star;
 int n;
 cout<<"enter the number of students"<<endl;
 cin>>n;
 for (int i = 1; i <= n; i++)
 {
 cout<<"enter the details of student "<<i<<endl;
 cin>>star.name[i]>>star.rollno[i];
 }
 for (int i = 1; i <= n; i++)
 {
 cout<<"the name is "<< star.name[i]<<endl<<"and the roll number is "<<star.rollno[i];
 return 0;
 }
 
 
}