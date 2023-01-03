#include<iostream>
int main(){
	int var1=20,var2=30;
	int *  ptr=&var1;
	std::cout<<*ptr<<"\n";
	*ptr+=20;//value of var1 20+20=40
	std::cout<<*ptr<<var1<<"\n";
	ptr=&var2;
	std::cout<<*ptr;
	return 0;
}
/*1.Constant pointer we cannot change address of pointer variable 
Address is not modified. 
2.Constant int we cannot change value of pointer variable
3.Constant int and constant pointer we cannot change address and value*/
