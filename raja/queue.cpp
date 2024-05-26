#include<stdlib.h>
#include<iostream>
using namespace std;
class array{
	int *arr;
	int max;
	int front;
	int rear;
	public:
		void display();
		array(int n);
		void input(int n);
		int isEmpty();
		int isFull();
		void dequeue();
		void enqueue(int c);
};
void array::input(int n){
//	cout<<"Enter N:";
//	cin>>n;
	int q;
	if(n<=max)
		for(int i=0;i<n;i++)
			cin>>q;
			enqueue(q);
}
void array::enqueue(int c){
	if(isEmpty()){
		front++;
		rear++;
		arr[0]=c;
}
	else 
		rear++;
		arr[rear]=c;
}
int array::isEmpty(){
	if(front==-1 && rear==-1)
		return 1;
	else
		return 0;
}
int array::isFull(){
	if(rear==max)
		return 1;
	else
		return 0;
}
void array::dequeue(){
	if(isEmpty()){
		cout<<"Cant delete,empty";
	}
	else if(front==0 && rear==0){
		arr[front]=-1;
		front--;
		rear--;
	}
	else{
		arr[++front]=-1;
	}
	
}
array::array(int n){
	front=-1;
	rear=-1;
	max=n;
	arr=new int[max];
	for(int i=0;i<n;i++)
		arr[i]=-1;
}
void array::display(){
	for(int i=front;i<rear;i++)
		cout<<arr[i];
}
int main(){
	int max,n,ele,in;
	cout<<"Enter Max Size:";
	cin>>max;
	array c(max);
	cout<<"Enter N:";
	cin>>n;
	c.input(n);
	c.display();
	cout<<"Enter the element to enqueue:";
	cin>>ele;
	c.enqueue(ele);
	c.display();
	c.dequeue();
	c.display();
	return 0;
}
