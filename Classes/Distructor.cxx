#include<iostream>
class nik{
	int x;
	public:
		nik(){
			x=10;
		}
		void disp(){
			std::cout<<x;
		}
		~nik(){}
}n;
int main(){
	n.disp();
	return 0;
}
