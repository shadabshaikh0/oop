//============================================================================
// Name        : Assignment22_STL_Binary.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
using namespace std;

int main()
{
	int n1,n2,data;
	stack<int> s1,s2,s3;
	cout<<"\nEnter no of bits in 1st binary number\n";
	cin>>n1;
	cout<<"\nEnter bits of 1st binary number\n";
	for(int i=1;i<=n1;i++)
	{
		cin>>data;
		s1.push(data);
	}

	cout<<"\nEnter no of bits in 2nd binary number\n";
	cin>>n2;
	cout<<"\nEnter bits of 2nd binary number\n";
	for(int i=1;i<=n2;i++)
	{
		cin>>data;
		s2.push(data);
	}

	int sum,carry=0,b1,b2;
		while(!s1.empty()||!s2.empty())
		{
			b1=b2=0;
			if(!s1.empty())
			{
				b1=s1.top();
				s1.pop();
			}
			if(!s2.empty())
			{
				b2=s2.top();
				s2.pop();
			}
			sum=(b1+b2+carry)%2;
			carry=(b1+b2+carry)/2;
			s3.push(sum);
		}
		if(carry==1)
		{
			s3.push(carry);
		}

		cout<<"\nAddition is\n";
		while(!s3.empty())
		{
			cout<<s3.top()<<" ";
			s3.pop();
		}
	return 0;
}
