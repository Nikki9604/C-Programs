#include<iostream>
int add(int x,int y){
	int z=x+y;
	return z;
}
int main(){
	int a=10,b=20;
	std::cout<<add(a,b);
	return 0;
}
//Return by value is only safe and valid
