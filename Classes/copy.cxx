#include<iostream>
class nik{
	int x;
	public:
		nik(int y):x(y){}
		~nik(){}
		nik(nik &a):x(a.x){}
		void display();
};
void nik:: display(){
	std:: cout<<x<<"\n";
}
int main(){
	nik ob1(10);
	nik ob2=ob1;
	ob1.display();
	ob2.display();
	return 0;
}
