#include<iostream>
class t1{
	int h,m;
	public:
		t1():h(0),m(0){}
		t1(int hh,int mm):h(hh),m(mm){}
		t1(const t1& ref):h(ref.h),m(ref.m){}
		t1 operator-(const t1 &ref){
			int th=this->h-ref.h;
			int tm=m-ref.m;
			return t1(th,tm);
		}
		void disp() const{ std::cout<<h<<":"<<m;}
};
int main(){
	t1 t(10,20);
	t1 t2(1,15);
	t1 t3;
	t3=t-t2;
	t3.disp();
	return 0;
}
