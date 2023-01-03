#include<iostream>
class box{
	public:
		double len;
		double breadth;
		double height;
};
int main(){
	box b1;
	double vol;
	b1.height=5;
	b1.len=6;
	b1.breadth=3;
	vol=b1.height*b1.len*b1.breadth;
	std::cout<<vol;
	return 0;
}
