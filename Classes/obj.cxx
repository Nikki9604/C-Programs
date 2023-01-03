#include<iostream>
class sam{
	int *arr;
	int top;
	int maxlen;
	public:
	sam(int len):maxlen(len),top(-1){
		arr=new int[maxlen];
	}
	~sam(){ delete[] arr;}
	void push(int val){
		arr[++top]=val;
	}
	int pop(){
		int val=arr[top--];
		return val;
	}
	bool isEmpty(){
		return top==-1;
	}
	bool isFull(){
		return top==maxlen-1;
	}
};
void test(){
	sam s2(15);
}
int main(){ 
	sam s1(20);
	s1.push(100);
	s1.push(200);
	test();
	std::cout<<s1.pop()<<"\n";
	return 0;}

