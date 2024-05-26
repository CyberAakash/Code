#include<iostream>
using namespace std;
class list{
	int *arr;
	int front;
	int rear;
	int max;
	public:
		list(int n);
		int getInput(int n);
		void display();
		int isEmpty();
		int isFull();
		int enqueue(int x);
		int dequeue();
};
list::list(int n){
	arr=new int[n];
	max=n;
	front=0;
	rear=-1;
	for(int i=0;i<n;i++){
		arr[i]=-1;
	}
}
int list::getInput(int n){
	cout<<"Enter N:";
	cin>>n;
	if(n<=max){
		int q;
		for(int i=0;i<n;i++){
			cin>>q;
			enqueue(q);
		}
	}
}
int list::isEmpty(){
	if(front==-1 && rear==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int list::isFull(){
	if(rear+1==max){
		return 1;
	}
	else{
		return 0;
	}
}
int list::enqueue(int x){
	if(isFull()){
		return 0;
	}
	else if(isEmpty()){
		arr[rear++]=x;
		front++;
	}
	else{
		arr[rear++]=x;
	}
}
int list::dequeue(){
	if(isFull()){
		return 0;
	}
//	else if(front==rear-1){
//		arr[++front]=-1;
//		front=-1;
//		rear=-1;
//	}
	else{
		arr[++front]=-1;
	}
}
void list::display(){
	cout<<endl<<front<<endl<<rear<<endl;
	for(int i=0;i<rear;i++){
		cout<<arr[i];
	}
}
int main(){
	int n,val;
	cout<<"Max:";
	cin>>n;
	list l(n);
	cout<<endl;
	l.getInput(n);
	cout<<"O/P:";
	l.display();
	cout<<endl;
	cout<<"Enter element to enqueue:";
	cin>>val;
	l.enqueue(val);
	cout<<"O/P:";
	l.display();
	cout<<endl;
	l.dequeue();
	cout<<"O/P:";
	l.display();
	return 0;
}
