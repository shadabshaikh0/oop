//============================================================================
// Name        : Assignment14_Exception.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include<exception>
#include<string.h>
using namespace std;
class except:public exception
{
public:
	char* what()
	{
		return "\nInvalid \n";
	}
};
class UserDefined
{
	int age,income,vehicle;
	string city;
public:
	void input();
	void ouput();
};
void UserDefined::input()
{
	cout<<"\nEnter age \n";
	cin>>age;
	cout<<"\nEnter income\n";
	cin>>income;
	cout<<"\nEnter vehicle\n";
	cin>>vehicle;
	cout<<"\nEnter city\n";
	cin>>city;
}
void UserDefined::ouput()
{
	try
	{
		if(!(age>=18 && age<=55))
		{
			throw except();
		}
	}
	catch(except &a)
	{
		cout<<a.what()<<" age\n";
	}
	try
	{
		if(!(income>=50000 && income<=1000000))
		{
			throw except();
		}
	}
	catch(except &a)
	{
		cout<<a.what()<<" income\n";
	}
	try
	{
		if(!(vehicle==4))
		{
			throw except();
		}
	}
	catch(except &a)
	{
		cout<<a.what()<<" vehicle\n";
	}
	try
	{
		if(!(city=="pune"||city=="mumbai"))
		{
			throw except();
		}
	}
	catch(except &a)
	{
		cout<<a.what()<<" city\n";
	}

}
int main()
{
	UserDefined u;
	u.input();
	u.ouput();
	return 0;
}
