#include<iostream>
class nik{
	int x,y;
	public:
		nik():x(10),y(20){}
		friend void nandu(nik n);
};
int main(){
	nik s;
	nandu(s);
	return 0;
}
void nandu(nik n){
	std::cout<<n.x<<n.y;
}

