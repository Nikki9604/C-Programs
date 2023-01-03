#include<iostream>
int main(){
	auto a=45;
	auto b='N';
	std::cout<< typeid(a).name() <<" "<<typeid(b).name();
	return 0;
	// 'i' represents int & 'c' represents char
}
