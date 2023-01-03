/*#include<iostream>
int main(){
	int len=10, *ptr =new int[len];
	for (int i=0 ;i<len ;i++)
		ptr[i]=std::rand()%10;
	for (int i=0;i<len-1;i++)
		std::cout<<ptr[i]<<",";
	std::cout<<ptr[len-1];
	delete[] ptr;
	return 0;
}
/*#include<iostream>
int main(){
	int *ptr,a[10];
	ptr=a;
	for(int i=0;i<10;i++)
		ptr[i]=std::rand()%10;
	for(int i=0;i<10;i++)
		std::cout<<ptr[i];
	//delete ptr; its working only when pointer directly declared to an array *ptr=new int[10]
	return 0;
}*/
#include<iostream>
int main(){
	int a[5]={1,2,3,4,5};
	int *p=&a;
	std::cout<<*p<<",";
	return 0;
}
