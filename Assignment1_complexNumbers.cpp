//============================================================================
// Name        : Assignment1_complexNumbers.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ComplexNumbers
{
	float real,imaginary;
public:
	ComplexNumbers()
	{
		real=0,imaginary=0;
	}
	friend istream& operator>>(istream &in,ComplexNumbers &c)
	{
		in>>c.real>>c.imaginary;
		return in;
	}
	friend ostream& operator<<(ostream &out,ComplexNumbers &c)
	{
		out<<c.real<<"+"<<c.imaginary<<"i\n";
		return out;
	}
	ComplexNumbers operator+(ComplexNumbers c)
	{
		ComplexNumbers temp;
			temp.real=real+c.real;
			temp.imaginary=imaginary+c.imaginary;
		return temp;
	}
	ComplexNumbers operator*(ComplexNumbers c)
	{
		ComplexNumbers temp;
			temp.real=(real*c.real)-(imaginary*c.imaginary);
			temp.imaginary=(real*c.imaginary)+(imaginary*c.real);
		return temp;
	}

};
int main()
{
	int options;
	ComplexNumbers c1,c2,c3;
		do
		{
		cout<<"\n1.Add two complex Numbers\n";
		cout<<"\n2.Multiply two complex Numbers\n";
		cout<<"\nEnter your choice\n";
		cin>>options;
			switch(options)
			{
			case 1:
				cout<<"\nEnter 1st complex Number\n";
				cin>>c1;
				cout<<"\nEnter 2nd complex Number\n";
				cin>>c2;
				c3=c1+c2;
				cout<<"\nAddition of complex Number\n";
				cout<<c3;
				break;
			case 2:
				cout<<"\nEnter 1st complex Number\n";
				cin>>c1;
				cout<<"\nEnter 2nd complex Number\n";
				cin>>c2;
				c3=c1*c2;
				cout<<"\nAddition of complex Number\n";
				cout<<c3;
				break;

			}
		}while(options!=0);
return 0;
}
