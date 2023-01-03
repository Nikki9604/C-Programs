#include<iostream>
template<typename t>
t sum (t x,t y){
	t res;
	res=x+y;
	return res;
}
int main(){
	int a=2,b=3;
	std::cout<<sum(a,b);
	return 0;
}
