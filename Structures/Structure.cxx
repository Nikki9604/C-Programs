#include<iostream>
#include<cstring>
struct student{
		char name[50];
		int roll;
		float marks;
}s;
int main(){
//	s st={"nik"};
	strcpy(s.name,"Nikhil");
	s.roll=1026;
	s.marks=69;
	std::cout<<s.name<<"\n"<<s.roll<<"\n"<<s.marks;
	return 0;
}

