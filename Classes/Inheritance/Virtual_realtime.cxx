#include<iostream>
#include<cmath>
class Container{
	protected:
		double x;
	public:
		virtual void init()=0;
		virtual void volume()=0;
};
class cube:public Container{
public:
	void init(){
		x=4;
	}
	void volume(){
		std::cout<<pow(x,3)<<"\n";
	}
};
const double pi=3.14;
class sphere:public Container{
	public:
		void init(){
			x=1;
		}
		void volume(){
			std::cout<<(double(4)/3)*pi*pow(x,3);
		}
};
int main(){
	Container *ptr;
	cube c1;
	ptr=&c1;
	ptr->init();
	ptr->volume();
	sphere s1;
	ptr=&s1;
	ptr->init();
	ptr->volume();
	return 0;
}
	
