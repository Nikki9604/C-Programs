#include<iostream>
int main(){
	int a[6]={1,5,4,3,6,8};
	int *p=a,*q=&a[4],l;
	std::cout<<*p<<*q<<"\n";
	l=q-p;//Subtraction of pointers in array
	p++;--q;//increment and decrement
	std::cout<<l<<"\n"<<*p<<*q;
	p+=2;q-=2;//const addition and const sub
	std::cout<<"\n"<<*p<<*q;
	std::cout<<"\n"<<*p++<<*++p<<++*p;
	return 0;
}
/*Special operations - *p++ , ++*p ,*++p
*p++ - first read the data then pointer will moves to the next element
*++p - first pointer will move to next element and read data
++*p/++(*p) - first it will take the value of variable then increment the value and prints
take data and increment the data
(*p)++ - read the data and increment the data
*/
