#include<iostream>
class b{
	protected:
		double width;
};
class box:b{
	public:
		double len;
		double setwid(double wid);
}b;
double box::setwid(double wid){
	width=wid;
	return width;
}
int main(){
	b.len=10;
	std::cout<<b.len<<b.setwid(20);
	return 0;
}
