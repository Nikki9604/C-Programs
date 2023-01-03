#include<iostream>
class sam{
	int x,y;
	public:
		sam(int p,int q):x(p),y(q){}
		friend void sw(sam* , int ,int);
		friend void disp(sam&);
};
void sw(sam* ptr , int a,int b){
	ptr->x=a,ptr->y=b;
//	std::cout<<ptr->x<<ptr->y;
}
void disp(sam& ref){
	std::cout<<ref.x<<ref.y;
}
int main(){
	sam s1(10,20);
	sw(&s1,200,40);
	disp(s1);
	return 0;
}
