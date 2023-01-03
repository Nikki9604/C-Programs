#include<iostream>
typedef struct student{
	char name[50];
	int roll;
	float marks;
}stu;
int main(){
	stu s={"Nikhil",1026,69};
	std::cout<<s.name<<"\n"<<s.roll<<"\n"<<s.marks;
	return 0;
}
