//============================================================================
// Name        : Assignment15_telephonee.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
class telephone
{
	char telephoneno[20];
	char name[20];
public:
	void getdata()
	{
		cout<<"\nEnter name\n";
		cin>>name;
		cout<<"\nEnter telephone no\n";
		cin>>telephoneno;
	}
	void display()
	{
		cout<<"\nName: "<<name ;
		cout<<"\nTelephone: "<<telephoneno;
	}

	char* getname()
	{
			return name;
	}
	char* gettelephoneno()
	{
			return telephoneno;
	}
	void update(char *nm,char *te)
	{
		strcpy(name,nm);
		strcpy(telephoneno,te);
	}
};

int main()
{
	int found;
	fstream file;
	telephone t;
	file.open("abc.txt",ios::out);
	file.clear();
	file.close();
	char tele[20],nam[20];
	int options;
	do
	{
	cout<<"\n1.Insert into file\n";
	cout<<"\n2.Display\n";
	cout<<"\n3.Search by name\n";
	cout<<"\n4.Search by telephone no\n";
	cout<<"\nEnter your choice\n";
	cin>>options;
		switch(options)
		{
		case 1:
				t.getdata();
				file.open("abc.txt",ios::out|ios::app);
				file.write((char*)&t,sizeof(t));
				file.close();
				break;
		case 2:
				file.open("abc.txt",ios::in);
				file.seekg(0,ios::beg);
				while(file)
				{
					file.read((char*)&t,sizeof(t));
					if(!file.eof())
					{
						t.display();
					}
				}
				file.close();
				break;
		case 3:
				cout<<"\nEnter name\n";
				cin>>nam;
				file.open("abc.txt",ios::in);
				file.seekg(0,ios::beg);
				while(file.read((char*)&t,sizeof(t)))
				{
					if(strcmp(t.getname(),nam)==0)
					{
						cout<<"Telephoneno: "<<t.gettelephoneno()<<endl;
					}
				}
				file.close();
				break;
		case 4:
				cout<<"\nEnter telephone no\n";
				cin>>tele;
				file.open("abc.txt",ios::in);
				file.seekg(0,ios::beg);
				while(file.read((char*)&t,sizeof(t)))
				{
					if(strcmp(t.gettelephoneno(),tele)==0)
					{
						cout<<"Name: "<<t.getname()<<endl;
					}
				}
				file.close();
				break;
		case 5:
				cout<<"\nEnter name\n";
				cin>>nam;
				file.open("abc.txt",ios::in|ios::out);
				file.seekg(0,ios::beg);
				found=0;
				while(file.read((char*)&t,sizeof(t)))
				{
					if(strcmp(t.getname(),nam)==0)
					{
						found=1;
						break;
					}
				}
				if(found==0)
				{
					cout<<"\nRecord not found\n";
				}
				else
				{
					int loc=(-1)*sizeof(t);
					if(file.eof())
					{
						file.clear();
					}
					cout<<"\nEnter telephone no:\n";
					cin>>tele;
					file.seekp(loc,ios::cur);
					t.update(nam,tele);
					file.write((char*)&t,sizeof(t));
				}
				break;
		}
	}while(options!=0);
	return 0;
}
