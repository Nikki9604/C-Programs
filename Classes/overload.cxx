#include<iostream>
class nik{
	int x,y;
	public:
		nik (){
			x=10;
			y=20;
		}
		nik (int a,int b){
			x=a;
			y=b;
		}
		nik(nik &a,nik &b){
			x=a.x;
			y=a.y;
		}
		void add(){
			std::cout<<x+y<<"\n";
		}
		void display(){
			std::cout<<x<<y;
		}
};
int main(){
	nik s1,s2(20,40),s3=s1;
	s1.add();
	s2.add();
	s3.display();
	return 0;
}
