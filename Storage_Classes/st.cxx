#include<iostream>
int arr[1];
int sta(){
	for(int i=0;i<5;i++){
		static int count=0;
		count++;
		std::cout<<count;
		arr[0]=count;
	}
	return arr[0];
}
int main(){
	std::cout<<sta();
	return 0;
}
