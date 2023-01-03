#include<iostream>
class pro{
//	int x=10;
	public:
		int x;
		pro(){
			x=10;
		}
		pro(pro &a){
			x=a.x;
		}
}p;
int main(){
	pro q=p;
	std::cout<<q.x;
	std::cout<<p.x;
	return 0;
}


