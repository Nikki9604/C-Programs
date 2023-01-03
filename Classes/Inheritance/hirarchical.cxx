//Deriving or creating more than one class from one base class
#include<iostream>
class nikki{
	public:
		int x,y;
		void getx(){
			x=100;y=43;
		}
};
class love:public nikki{
	public:
		void gety(){
			std::cout<<x+y<<"\n";
		}
};
class chitti:public nikki{
	public:
		void getz(){
			std::cout<<x-y;
		}
};
int main(){
	love o1;
	chitti o2;
	o1.getx();
	o1.gety();
	o2.getx();
	o2.getz();
	return 0;
}
