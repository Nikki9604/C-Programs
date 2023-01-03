#include<iostream>
class nikki{
	public:
		int x;
		void get(){
			x=100;
		}
};
class love:virtual public nikki{
	public:
		int y;
		void gety(){
			y=40;
		}
};
class chitti:virtual public nikki{
	public:
		int z;
		void getz(){
			z=3;
		}
};
class Hamsi:public love,public chitti{
	public:
		void add(){
			std::cout<<x+y+z;
		}
};
int main(){
	Hamsi h;
	h.get();
	h.gety();
	h.getz();
	h.add();
	return 0;
}
