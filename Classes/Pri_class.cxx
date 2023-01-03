/*#include<iostream>
class box{
	double width;
	public:
		double len;
		void setwid(double wid);
		double getwid(void);
}b;
double box::getwid(void){
	return width;
}
void box::setwid(double wid){
	width=wid;
}
int main(){
	b.len=10;
	b.setwid(20);
	std::cout<<b.len<<b.getwid();
	return 0;
}*/
#include<iostream>
class box{
	double width;
	public:
		double len;
		double setwid(double wid);
}b;
double box::setwid(double wid){
	width=wid;
	return width;
}
int main(){
	double a=20;
	b.len=10;
	std::cout<<b.len<<b.setwid(a);
	return 0;
}
