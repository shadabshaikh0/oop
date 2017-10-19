//============================================================================
// Name        : Assignment17_commandline.cpp
// Author      : shadab shaikh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

 #include <fstream>
 #include <iostream>
 #include <string.h>
 #include<cstdlib>
 using namespace std;
 int main(int argc,char *argv[])
 {
	 if(argc<4)
	 {
		 cout<<"\nInsufficient no of arguments\n";
	 }
	 fstream fin;
	 string data,newdata="";
	 cout<<"\nFind string "<<argv[2]<<" and replace with"<<argv[3]<<"in file"<<argv[1]<<endl;
	 //=======================================
	 cout<<"\nFile contents before replacing\n";
	 fin.open(argv[1],ios::in);
	 if(!fin)
	 {
		 cout<<"\nError opening file \n";
		 return 1;
	 }
	 	 while(fin)
	 	 {
	 		 getline(fin,data);
	 		 cout<<data<<endl;
	 	 }
	 fin.close();
	 //=======================================
	 fin.open(argv[1],ios::in);
	 if(!fin)
	 {
		 cout<<"\nError opening file \n";
		 return 1;
	 }
	 	 while(fin)
	 	 {
	 		 getline(fin,data);
	 		 int a=(int)data.find(argv[2],0);
	 		 while(a!=string::npos)
	 		 {
	 			 data.replace(a,strlen(argv[2]),argv[3]);
	 			 a=data.find(argv[2],a+1);
	 		 }
	 		 newdata=newdata+data+"\n";
	 	 }
	 fin.close();
	 //=======================================
	 fin.open(argv[1],ios::out);
	 if(!fin)
	 {
		 cout<<"\nError opening file \n";
		 return 1;
	 }
	 fin<<newdata;
	 cout<<"\nReplacement successful\n";
	 fin.close();
	 //========================================
	 cout<<"\nFile contents after replacing\n";
	 fin.open(argv[1],ios::in);
	 if(!fin)
	 {
		 cout<<"\nError opening file \n";
		 return 1;
	 }
	 while(fin)
	 	 {
	 		 getline(fin,data);
	 		 cout<<data<<endl;
	 	 }
	 fin.close();


	 return 0;
 }
