#include<iostream>
int main(){
	int x=10;
	int *ref=&x;
	std::cout<<ref<<"\n";
//	&ref=20;
	std::cout<<x<<"\n";
	++x;
	std::cout<<ref<<"\n";
	std::cout<<&x<<&ref;
	return 0;
}
