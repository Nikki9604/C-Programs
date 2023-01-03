//Creating only one derived class from base classes
#include<iostream>
class nikki{
	public:
		int x;
		void getx(){
			x=100;
		}
};
class  love{
	public:
		int y;
		void gety(){
			y=43;
		}
};
class hamsi{
	public:
		int a;
		void geta(){
			a=8;
		}
};
class chitti:public love,public nikki , public hamsi{
	public:
		int z;
		void getz(){
			z=x+y;
			std::cout<<z<<","<<a;
		}
}o;
int main(){
	o.getx();
	o.gety();
	o.geta();
	o.getz();
	return 0;
}
