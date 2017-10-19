//============================================================================
// Name        : Assignment2_polnomial.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;
class Polynomial
{
	int a,b,c,x,result;
public:
	Polynomial()
	{
		a=b=c=x=result=0;
	}
	friend istream& operator>>(istream &in,Polynomial &p)
	{
		in>>p.a>>p.b>>p.c;
		return in;
	}
	friend ostream& operator<<(ostream &out,Polynomial &p)
	{
		out<<p.a<<"x^2+"<<p.b<<"x+"<<p.c<<"\n";
		return out;
	}
	Polynomial operator+(Polynomial p)
	{
		Polynomial temp;
			temp.a=a+p.a;
			temp.b=b+p.b;
			temp.c=c+p.c;
		return temp;
	}
	void eval()
	{
		cout<<"\nEnter value of x\n";
		cin>>x;
		result=a*pow(x,2)+b*x+c;
		cout<<"\nResult:"<<result<<endl;
	}
	void findRoots()
	{
		float root1,root2;
		float delta=(b*b)-(4*a*c);
			if(delta>0)
			{
				cout<<"\nRoots are real and different\n";
				root1=-b+sqrt(delta)/2*a;
				root2=-b-sqrt(delta)/2*a;
				cout<<"\nRoot1:"<<root1;
				cout<<"\nRoot2:"<<root2;
			}
			else if(delta==0)
			{
				cout<<"\nRoots are real and equal\n";
				root1=root2=-b+sqrt(delta)/2*a;
				cout<<"\nRoot:"<<root1;
			}
			else
			{
				cout<<"\nRoots are complex and different\n";
				float root11=-b/(2*a);
				float root12=sqrt(delta)/(2*a);
				cout<<"\n"<<root11<<"+"<<root12<<"i";
				float root21=-b/(2*a);
				float root22=sqrt(delta)/(2*a);
				cout<<"\n"<<root21<<"-"<<root22<<"i";
			}
	}
};
int main()
{
	Polynomial p1,p2,p3;
	int options;
		do
		{
		cout<<"\n1.Addition of two polynomial\n";
		cout<<"\n2.Evaluation of polynomials\n";
		cout<<"\n3.Find Roots\n";
		cout<<"\nEnter your choice\n";
		cin>>options;

			switch(options)
			{
			case 1:
				cout<<"\nEnter coefficients of 1st polynomial\n";
				cin>>p1;
				cout<<"\nEnter coefficients of 2nd polynomial\n";
				cin>>p2;
				p3=p1+p2;
				cout<<"\nAddition of polynomials\n";
				cout<<p3;
				break;
			case 2:
				p1.eval();
				break;
			case 3:
				p1.findRoots();
				break;
			}
		}while(options!=0);
	return 0;
}
