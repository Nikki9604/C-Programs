#include<iostream>
class nik{
	int no;
	static int count;
	public:
		void get(int a){
			no=a;
			count=count+1;
		}
		void disp(){
			std::cout<<count;}
};
int nik::count;
int main(){
	nik s1,s2;
	s1.get(10);
	s1.disp();
	s2.get(20);
	s2.disp();
	return 0;
}

