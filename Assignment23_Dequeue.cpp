//============================================================================
// Name        : Assignment23_Dequeue.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> dq;
	deque<int>::iterator it;
	int options,data;
	do
	{
	cout<<"\n============Deque implementation===========\n";
	cout<<"\n1.Insert element at the back\n";
	cout<<"\n2.Insert element at the front \n";
	cout<<"\n3.Delete element at the back\n";
	cout<<"\n4.Delete element at the front \n";
	cout<<"\n5.Front element of the Deque\n";
	cout<<"\n6.Back element of the Deque \n";
	cout<<"\n7.Size of the Deque\n";
	cout<<"\n8.Display Deque\n";
	cout<<"\nEnter your choice\n";
	cin>>options;
		switch(options)
		{
		case 1:
			cout<<"\nEnter value to be inserted at back\n";
			cin>>data;
			dq.push_back(data);
			break;
		case 2:
			cout<<"\nEnter value to be inserted at front\n";
			cin>>data;
			dq.push_front(data);
			break;
		case 3:
			data=dq.back();
			dq.pop_back();
			cout<<"\n value at back: "<<data;
			break;
		case 4:
			data=dq.front();
			dq.pop_front();
			cout<<"\n value at front: "<<data;
			break;
		case 5:
			cout<<"\n value at front: "<<dq.front();
			break;
		case 6:
			cout<<"\n value at back: "<<dq.back();
			break;
		case 7:
			cout<<"\nSize of Deque: "<<dq.size();
			break;
		case 8:
			cout<<"\nElements in dequeu\n";
			for(it=dq.begin();it!=dq.end();it++)
			{
				cout<<*it<<"\t";
			}
			break;
		}
	}while(options!=0);
	return 0;
}
