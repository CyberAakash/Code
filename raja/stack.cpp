#include<iostream>
#include<stdlib.h>
using namespace std;
class array{
		int *arr;
		int max;
		int top;
		public:
			array(int n);
			void display();
			void insert(int n);
			int isEmpty();
			int isFull();
			void push(int ele);
			void pop();
	};
array::array(int n){
	max=n;
	top=0;
	arr=new int[max];
	for(int i=0;i<max;i++)
		arr[i]=-1;
}
int array::isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}
void array::pop(){
	if(isEmpty())
		cout<<"Can't delete,stack empty";
	else
		arr[top-1]=-1;
		top--;
}
int array::isFull(){
	if(top==max)
		return 1;
	else
		return 0;
}
void array::push(int c){
	if(isFull())
		printf("Can't Insert ,stack is full.");
	else
		arr[top]=c;
		top++;
}
void array::insert(int n){
	cout<<"Enter elements to insert";
	if(n<=max){
		for(int i=0;i<n;i++,top++)
			cin>>arr[i];
	}
	cout<<top;
}
void array::display(){
//	cout<<top;
	for(int i=0;i<top;i++){
		cout<<arr[i];
	}
}
int main(){
	int max,n,ele,in;
	cout<<"Enter Max Size:";
	cin>>max;
	array c(max);
	cout<<"Enter N:";
	cin>>n;
	c.insert(n);
	c.display();
	cout<<"Enter the element to push:";
	cin>>ele;
	c.push(ele);
	c.display();
	c.pop();
	c.display();
	return 0;
}
