#include<iostream>
class A{
	int x;
	public:
		virtual void f1(){
			x=10;
			std::cout<<x;
		}
};
class B:public A{
	int y;
	public:
		void f1(){
			y=20;
			std::cout<<y;
		}
};
int main(){
	A a1;
	B b1;
	b1.f1(); //20
	A *p1=new A();
	p1->f1();//10
	B *p2=&b1;
	A *p3=&b1;
	p2->f1();//20
	p3->f1();//10//20
//	p3->f2();
	return 0;
}
