#include<iostream>
int main(){
	int *ptr=new int(100) ;
//	*ptr=100;
	std::cout<<*ptr;
	delete ptr;;
	return 0;
}
