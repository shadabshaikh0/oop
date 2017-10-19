//============================================================================
// Name        : Assignment24_stl_sort_search.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
//======================PERSON RECORD================
class PersonRecord
{
public:
	char name[10],dob[10],telephone[10];
		bool operator==(const PersonRecord &p)
		{
			int t=strcmp(name,p.name);
			if(t)
				return 0;
			return 1;
		}
};
vector<PersonRecord> v;
bool comparePersonRecord(const PersonRecord &p1,const PersonRecord &p2)
{
	int t=strcmp(p1.name,p2.name);
	if(t<0)
		return 1;
	return 0;
}

void insertPersonRecord()
{
	PersonRecord p1;
	cout<<"\nEnter name\n";
	cin>>p1.name;
	cout<<"\nEnter dob\n";
	cin>>p1.dob;
	cout<<"\nEnter telephone\n";
	cin>>p1.telephone;
	v.push_back(p1);
}
void printPersonRecord(PersonRecord &p)
{
	cout<<"\nName: "<<p.name;
	cout<<"\nDob : "<<p.dob;
	cout<<"\nTelephone:"<<p.telephone;
}
void displayPersonRecord()
{
	for_each(v.begin(),v.end(),printPersonRecord);
}

void searchPersonRecord()
{
	vector<PersonRecord>::iterator itp;
	PersonRecord p1;
	cout<<"\nEnter name of person to be search\n";
	cin>>p1.name;
	itp=find(v.begin(),v.end(),p1);
	if(itp==v.end())
	{
		cout<<"\nNot found\n";
	}
	else
	{
		cout<<"\nFound\n";
	}
}
//===============================================

//======================ITEM RECORD================
class ItemRecord
{
public:
	char name[10];
	int code,quantity,cost;
		bool operator==(const ItemRecord &i)
		{
			int t=strcmp(name,i.name);
			if(t)
				return 0;
			return 1;
		}
};
vector<ItemRecord> v1;
bool compareItemRecord(const ItemRecord &i1,const ItemRecord &i2)
{
	return i1.cost<i2.cost;
}

void insertItemRecord()
{
	ItemRecord i1;
	cout<<"\nEnter name\n";
	cin>>i1.name;
	cout<<"\nEnter code\n";
	cin>>i1.code;
	cout<<"\nEnter quantity\n";
	cin>>i1.quantity;
	cout<<"\nEnter cost\n";
	cin>>i1.cost;
	v1.push_back(i1);
}
void printItemRecord(ItemRecord &p)
{
	cout<<"\nName: "<<p.name;
	cout<<"\nCode : "<<p.code;
	cout<<"\nQuantity:"<<p.quantity;
	cout<<"\nCost:"<<p.cost;
}
void displayItemRecord()
{
	for_each(v1.begin(),v1.end(),printItemRecord);
}

void searchItemRecord()
{
	vector<ItemRecord>::iterator iti;
	ItemRecord i1;
	cout<<"\nEnter name of item to be search\n";
	cin>>i1.name;
	iti=find(v1.begin(),v1.end(),i1);
	if(iti==v1.end())
	{
		cout<<"\nNot found\n";
	}
	else
	{
		cout<<"\nFound\n";
	}
}
//===============================================

int main()
{

	int option,option1,option2;
	do
	{
	cout<<"\n1.PERSON RECORD\n";
	cout<<"\n2.ITEM RECORD\n";
	cout<<"\nEnter your choice\n";
	cin>>option;
		switch(option)
		{
		case 1:
			cout<<"\n===========Person record==========\n";
			do
			{
			cout<<"\n1.insert\n";
			cout<<"\n2.display\n";
			cout<<"\n3.search\n";
			cout<<"\n4.sort\n";
			cout<<"\nEnter your choice\n";
			cin>>option1;
				switch(option1)
				{
				case 1:
						insertPersonRecord();
						break;
				case 2:
						displayPersonRecord();
						break;
				case 3:
						searchPersonRecord();
						break;
				case 4:
						sort(v.begin(),v.end(),comparePersonRecord);
						displayPersonRecord();
						break;
				}

			}while(option1!=0);

			break;
		case 2:
			cout<<"\n===========Item record==========\n";
			do
			{
			cout<<"\n1.insert\n";
			cout<<"\n2.display\n";
			cout<<"\n3.search\n";
			cout<<"\n4.sort\n";
			cout<<"\nEnter your choice\n";
			cin>>option2;
				switch(option2)
				{
				case 1:
						insertItemRecord();
						break;
				case 2:
						displayItemRecord();
						break;
				case 3:
						searchItemRecord();
						break;
				case 4:
						sort(v1.begin(),v1.end(),compareItemRecord);
						displayItemRecord();
						break;
				}

			}while(option2!=0);

			break;
		}
	}while(option!=0);
	return 0;
}
