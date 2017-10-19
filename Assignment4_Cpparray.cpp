//============================================================================
// Name        : Assignment4_Cpparray.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Cpparray
{
	int arr[10],size;
public:
	friend istream& operator>>(istream &in,Cpparray &c)
	{
		cout<<"\nEnter no of elements in array\n";
		cin>>c.size;
		cout<<"\nEnter elements in array\n";
		for(int i=0;i<c.size;i++)
		{
			in>>c.arr[i];
		}
		return in;
	}
	friend ostream& operator<<(ostream &out,Cpparray &c)
	{
		cout<<"\nElements of array is\n";
		for(int i=0;i<c.size;i++)
		{
			out<<c.arr[i]<<"\t";
		}
		return out;
	}

	void operator=(Cpparray &c)
	{
		size=c.size;
		for(int i=0;i<c.size;i++)
		{
			arr[i]=c.arr[i];
		}

	}
	void size_of_array();
	void range();
};
void Cpparray::size_of_array()
{
	cout<<"\nSize of array :"<<size;
}
void Cpparray::range()
{
	cout<<"\nArray ranges from (0-> "<<arr[0]<<") to ("<<size-1<<" ->"<<arr[size-1]<<")" ;
}


int main()
{
	Cpparray c1,c2;
	int options;
	do
	{
	cout<<"\n1.Range Checking\n";
	cout<<"\n2.Assigned one to second array\n";
	cout<<"\n3.size of array\n";
	cout<<"\nEnter options\n";
	cin>>options;
		switch(options)
		{
		case 1:
			cin>>c1;
			c1.range();
			break;
		case 2:
			cin>>c1;
			c2=c1;
			cout<<c2;
			break;
		case 3:
			cin>>c1;
			c1.size_of_array();
			break;
		}
	}while(options!=0);
	return 0;
}
