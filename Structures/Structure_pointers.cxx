#include<iostream>
#include<cstring>
void print(struct student *a);
struct student{
	char name[50];
	int roll;
	float marks;
};
int main(){
	struct student s;
	strcpy(s.name,"Nikhil");
	s.roll=1026;
	s.marks=69;
	print(&s);
}
void print(struct student *a){
	std::cout<<a->name<<"\n"<<a->roll<<"\n"<<a->marks;
}

