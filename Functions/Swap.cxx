#include<iostream>
void swap(int *x,int *y){//pass by address
	int temp=*x;
	*x=*y;
	*y=temp;
}
void myswap(int& r1,int&r2){//pass by reference
	int temp=r1;
	r1=r2;
	r2=temp;
}
void tryswap(int x, int y){//pass by value
	int temp=x;
	x=y;
	y=temp;
	std::cout<<x<<y;	
}
int main(){
	int a=10,b=20;
	tryswap(a,b);
	swap(&a,&b);
	std::cout<<"\n"<<a<<b;
	myswap(a,b);
	std::cout<<"\n"<<a<<b;
	return 0;
}
