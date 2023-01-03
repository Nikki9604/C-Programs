//Single level and Herarchical inheritances are included in this program
/*#include<iostream>
class nikki{
	public:
		int x;
		void getx(){
			x=100;
		}
};
class love:public nikki{
	public:
		int y;
		void gety(){
			y=43;
		}
};
class chitti:public love{
	public:
		void add(){
			std::cout<<x+y<<'\n';
		}
};
class hamsi:public love{
	public:
		void sub(){
			std::cout<<x-y;
		}
};
int main(){
	love o1;
	chitti o2;
	hamsi o3;
	o1.getx();
	std::cout<<o1.x<<"\n";
	o1.gety();
	std::cout<<o1.y<<"\n";
	o2.getx();
	o2.gety();
	o2.add();
	o3.getx();
	o3.gety();
	o3.sub();
	return 0;
}*/
// Single level , multi level and multiple level inheritances are included in this program
#include<iostream>
class nikki{
	public:
		int x;
		void getx(){
			x=100;
		}
};
class love: public nikki{
	public:
		int y;
		void gety(){
			y=40;
		}
};
class chitti{
	public:
		int z;
		void getz(){
			z=3;
		}
};
class Hamsi:public love , public chitti{
	public:
		void add(){
			std::cout<<x+y+z;
		}
};
int main(){
	Hamsi h;
	h.getx();
	h.gety();
	h.getz();
	h.add();
	return 0;
}
















