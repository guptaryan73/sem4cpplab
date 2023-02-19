#include<iostream>
using namespace std;

struct student 
{
    char name[20];
    int rollno;

};

int main () 
{
 student star;
 cout<<"enter the details"<<endl;
 cin>>star.name>>star.rollno;
 cout<<"the name is "<<star.name<<endl<<"and the roll number is "<<star.rollno;
 return 0;
}