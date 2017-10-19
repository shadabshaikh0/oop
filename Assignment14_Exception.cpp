//============================================================================
// Name        : Assignment14_Exception.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

class Userdefined_Exception
{
	int age, income,vehicle;
	char city[10];
public:
	void getdata();
	void display();
};
void Userdefined_Exception:: getdata()
{
	cout<<"\nEnter User information\n";
	cout<<"\nEnter age\n";
	cin>>age;
	cout<<"\nEnter income\n";
	cin>>income;
	cout<<"\nEnter vehicle\n";
	cin>>vehicle;
	cout<<"\nEnter city\n";
	cin>>city;
}
void Userdefined_Exception::display()
{
	try
	{
		if(!(age>=18 && age<=55))
		{
			throw 1;
		}
	}
	catch(int s)
	{
		cout<<"\nInvalid age\n";
	}

	try
	{
		if(!(income>=50000 && age<=1000000))
		{
			throw 1;
		}
	}
	catch(int s)
	{
		cout<<"\nInvalid income\n";
	}

	try
	{
		if(!(city=="pune"||city=="Banglore"||city=="chennai"||city=="Mumbai"))
		{
			throw 1;
		}
	}
	catch(int s)
	{
		cout<<"\nInvalid city\n";
	}
	try
	{
		if(!(vehicle==4))
		{
			throw 1;
		}
	}
	catch(int s)
	{
		cout<<"\nInvalid vehicle\n";
	}
}
int main()
{
	Userdefined_Exception u;
	u.getdata();
	u.display();
	return 0;
}
