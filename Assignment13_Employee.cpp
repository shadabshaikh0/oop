//============================================================================
// Name        : Assignment13_Employee.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Personal
{
protected:
	int age;
	char gender;
	char name[10];
public:
	void getpersonal()
	{
		cout<<"\nEnter personal infornation\n";
		cout<<"\nEnter name\n";
		cin>>name;
		cout<<"\nEnter gender\n";
		cin>>gender;
		cout<<"\nEnter age\n";
		cin>>age;
	}
};
class professional
{
protected:
	int experience_year;
	char organisation_name[20];
	char project_name[20];
public:
	void getprofessional()
	{
		cout<<"\nEnter professional infornation\n";
		cout<<"\nEnter experience year\n";
		cin>>experience_year;
		cout<<"\nEnter organisation name\n";
		cin>>organisation_name;
		cout<<"\nEnter project name\n";
		cin>>project_name;
	}
};

class Academic
{
protected:
	int marks;
	char degree[10];
	char collegename[10];
public:
	void getacademic()
	{
		cout<<"\nEnter Academic information\n";
		cout<<"\nEnter marks\n";
		cin>>marks;
		cout<<"\nEnter degree\n";
		cin>>degree;
		cout<<"\nEnter college name\n";
		cin>>collegename;
	}
};

class Biodata:public Personal,public professional,public Academic
{
public:
	void display()
	{
		cout<<"\n=========================Employee Biodata===========================\n";
		cout<<"\n================Employee personal information=======================\n";
		cout<<"\n Name:"<<name;
		cout<<"\n Gender:"<<gender;
		cout<<"\n Age:"<<age;
		cout<<"\n================Employee professional information===================\n";
		cout<<"\n Experience year:"<<experience_year;
		cout<<"\n Organisation name:"<<organisation_name;
		cout<<"\n Project name:"<<project_name;
		cout<<"\n================Employee Academic information=======================\n";
		cout<<"\n Marks:"<<marks;
		cout<<"\n Degree:"<<degree;
		cout<<"\n College name:"<<collegename;

	}
};
int main()
{
	Biodata b;
	b.getpersonal();
	b.getprofessional();
	b.getacademic();
	b.display();
	return 0;
}
