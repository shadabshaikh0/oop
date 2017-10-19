//============================================================================
// Name        : Asignment5_calculator.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Calculator
{
	float num1,num2,result;
public:
	void getdata();
	void putdata();
	void addition();
	void substraction();
	void multiply();
	void division();
};
void Calculator::getdata()
{
	cout<<"\nEnter two operands\n";
	cin>>num1>>num2;
}
void Calculator::putdata()
{
	cout<<"\nResult:"<<result;
}
void Calculator::addition()
{
	result=num1+num2;
}
void Calculator::substraction()
{
	result=num1-num2;
}
void Calculator::multiply()
{
	result=num1*num2;
}
void Calculator::division()
{
	result=num1/num2;
}

int main()
{
	Calculator c;
	c.getdata();
	char options;
	do
	{
		cout<<"\n+.Addition\n";
		cout<<"\n-.Substraction\n";
		cout<<"\n*.Multiplication\n";
		cout<<"\n/.Division\n";
		cout<<"\nEnter your operand\n";
		cin>>options;

		switch(options)
		{
		case '+':
			c.addition();
			c.putdata();
			break;
		case '-':
			c.substraction();
			c.putdata();
			break;
		case '*':
			c.multiply();
			c.putdata();
			break;
		case '/':
			c.division();
			c.putdata();
			break;
		}
	}while(options!=0);
	return 0;
}
