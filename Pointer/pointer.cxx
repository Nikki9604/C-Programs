 #include<iostream>
int main(){
	int x=5;
	int*ptr=&x;//Address  of x is value of ptr
	int& ref=x;//value of x and ref is same x=ref=5 ,x and ref both address are same.
	std::cout<<ptr<<"\n";
	std::cout<<*ptr<<"\n";
	std::cout<<&ptr<<"\n";
	std::cout<<&x<<"\n"<<ref<<"\n"<<&ref;
	return 0;
}
