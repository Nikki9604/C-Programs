#include<iostream>
int arr[1];
int Stact(){
	for (int i=0; i<5;i++){
		static int count=0;
		count++;
		std::cout<<count;
		arr[0]=count;
	}
	std::cout<<"\nStatic Value ";
	return arr[0];
}
int Non_Stact(){
	for (int i=0; i<5;i++){
		int count=0;
		count++;
		std::cout<<count;
		arr[0]=count;
	}
	std::cout<<"\nNon Static Value ";
	return arr[0];
}
int main(){
	std::cout<<Stact()<<"\n"<<Non_Stact()<<"\n";
	return 0;
}

