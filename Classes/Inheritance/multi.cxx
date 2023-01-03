#include<iostream>
class nikki{
	public:
		int x;
		void getx(){
			x=100;
		}
};
class  love:public nikki{
	public:
		int y;
		void gety(){
			y=43;
		}
};
class chitti:public love{
	public:
		int z;
		void getz(){
			z=x+y;
			std::cout<<z;
		}
}o;
int main(){
	o.getx();
	o.gety();
	o.getz();
	return 0;
}
