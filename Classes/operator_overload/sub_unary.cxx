#include<iostream>
class t1{
	int h,m;
	public:
		t1():h(0),m(0){}
		t1(int hh,int mm):h(hh),m(mm){}
		t1(const t1& ref):h(ref.h),m(ref.m){}
		t1& operator --(){
			--m;
			--h;
			return *this;
		}
		void disp() const{ std::cout<<h<<":"<<m;}
};
int main(){
	t1 t(10,20);
	t.disp();
	t1 t2(11,15);
	--t;
	t.disp();
	--t2;
	t2.disp();
	return 0;
}
