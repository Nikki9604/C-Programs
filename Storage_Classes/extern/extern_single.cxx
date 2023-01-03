#include<iostream>
int c;
void ext(void){
	c=6;
}
int main(){
	extern int c;
	ext();
	std::cout<<c;
}
