//============================================================================
// Name        : Assignment18_selectioon.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Selection_sort
{
	T a[10],n;
public:
	void getdata()
	{
		cout<<"\nEnter no of elements\n";
		cin>>n;
		cout<<"\nEnter elements\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
	void display()
	{
		cout<<"\nElements are:\n";
		for(int i=0;i<n;i++)
		{
			cout<<"\t"<<a[i];
		}

	}
	void selectionsort()
	{
		int min,i,j;
		T temp;
		for(i=0;i<n;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
			{
				if(a[min]>a[j])
				{
					min=j;
				}
			}
			if(min!=i)
			{
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
		}
	}
};

int main()
{
	cout<<"\nInterger Numbers\n";
	Selection_sort<int> s;
	s.getdata();
	s.selectionsort();
	s.display();

	cout<<"\nFloat Numbers\n";
	Selection_sort<float> t;
	t.getdata();
	t.selectionsort();
	t.display();

	return 0;
}
