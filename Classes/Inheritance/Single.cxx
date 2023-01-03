/*#include<iostream>
class nik{
	int x;
	public:
		nik(int p):x(p){ }
		int printx(){
			return x;
		}
};
class chitti:public nik{
	int y;
	public:
		chitti(int p,int q):nik(p),y(q){ }
		void add(){
			std:: cout<<printx()+y;
		}
};
int main(){
//	nik love(100); //this syntax=True
	chitti lo(100,43);
//	std::cout<<lo.printx(); this syntax =True
	lo.add();
	return 0;
}
#include<iostream>
class nik{
	public:
		int x,y;
		void get(){
			x=100;
			y=43;
		}
};
class chitti :public nik{
	public :
		void add(){
			std::cout<<x+y;
		}
};
int main(){
	chitti love;
	love.get();
	love.add();
	return 0;
}
*/
#include<iostream>
class nik{
	int x;
	public:
		nik(int p,int q):x(p),z(q){ }
		int printx(){
			return x+z;
		}
	protected:
	int z;
};
class chitti:public nik{
	int y;
	public:
		chitti(int p,int q,int r):nik(p,q),y(r){ }
		void add(){
			std:: cout<<printx()+y;
		}
};
int main(){
//	nik love(100,43); //this syntax=True
	chitti lo(100,40,3);
//	std::cout<<lo.printx(); this syntax =True
	lo.add();
	return 0;
}

