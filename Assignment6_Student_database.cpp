//============================================================================
// Name        : Assignment6_Student_database.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

class student_database;
class collage
{
	char collagename[10];
public:
	collage()
	{
		strcpy(collagename,"pict");
	}
	friend class student_database;
};

class student_database
{
	char name[10],classs[10],division[10],dob[10],bg[10],telephone[10],contact_address[10],drivinglicense[10];
	int rollno;
public:
	inline void display();
	student_database()
	{
		rollno=0;
		strcpy(name,"ABC");
		strcpy(classs,"XYZ");
		strcpy(division,"A");
		strcpy(dob,"1/1/1111");
		strcpy(bg,"b+");
		strcpy(telephone,"2000000");
		strcpy(contact_address,"pune");
		strcpy(drivinglicense,"A101010");
	}
	student_database(student_database *s)
	{
		rollno=0;
		strcpy(name,s->name);
		strcpy(classs,s->classs);
		strcpy(division,s->division);
		strcpy(dob,s->dob);
		strcpy(bg,s->bg);
		strcpy(telephone,s->telephone);
		strcpy(contact_address,s->contact_address);
		strcpy(drivinglicense,s->drivinglicense);
	}
	void getdata()
	{
		cout<<"\nEnter student details about name,classs,division,dob,bg,telephone,contact_address,drivinglicense\n";
		cin>>name>>classs>>division>>dob>>bg>>telephone>>contact_address>>drivinglicense;

	}
	static int student_no;
	static void count()
	{
		cout<<"\nNumber of objects created: "<<student_no;
	}
	~student_database(){
		cout<<"\n"<<this->name<<"object is destroyed\n";
	}
};
 void student_database:: display()
{
	cout<<"\tname\tclasss\tdivision\tdob\tbg\ttelephone\tcontact_address\tdrivinglicense\n";
	cout<<"\t"<<this->name<<"\t"<<this->classs<<"\t"<<this->division<<"\t"<<this->dob<<"\t"<<this->bg<<"\t"<<this->telephone<<"\t\t"<<this->contact_address<<"\t"<<this->drivinglicense;
	cout<<endl;
}
int student_database::student_no;
int main()
{
	int n;
	student_database s1,*ptr[5];
	//default constrcutor
	s1.display();

	s1.getdata();
	s1.display();

	student_database s2(&s1);
	s2.display();

	cout<<"\nHow many objects you want to create\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		ptr[i]=new student_database();
		student_database::student_no++;
	}
	cout<<"\tname\tclasss\tdivision\tdob\tbg\ttelephone\tcontact_address\tdrivinglicense";
	for(int i=0;i<n;i++)
	{
		ptr[i]->display();
	}
	cout<<"\nTotal no of students:";
	student_database::count();

	for(int i=0;i<n;i++)
	{
			delete(ptr[i]);
	}

	cout<<"\nObject deleted\n";
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
