#include<iostream>
using namespace std;
class list{
	int *arr;
	int top;
	int max;
	public:
		list(int n);
		int isEmpty();
		int isFull();
		int push(int x);
		int pop();
		void display();
		int getInput(int n);
};
list::list(int n){
	arr= new int[n];
	max=n;
	top=0;
	for(int i=0;i<n;i++){
		arr[i]=-1;
	}
}
int list::isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int list::isFull(){
	if(top==max){
		return 1;
	}
	else{
		return 0;
	}
}
int list::push(int x){
	if(isFull()){
		return 0;
	}
	else{
		arr[top++]=x;
//		cout<<endl<<top;
		return 1;
	}
}
int list::pop(){
	if(isEmpty()){
		return 0;
	}
	else{
		arr[top]=-1;
		top--;
	}
}
void list::display(){
	for(int i=0;i<top;i++){
		cout<<arr[i];
	}
} 
int list::getInput(int n){
	cout<<"Enter N:";
	cin>>n;
	if(n<=max){
		for(int i=0;i<n;i++){
			cin>>arr[i];
			top++;
		}
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int x,n;
	cout<<"Enter Max:";
	cin>>n;
	cout<<endl;
	list l(n);
	l.getInput(n);
	cout<<"O/P:";
	l.display();
	cout<<endl;
	cout<<"Enter Element to Push:";
	cin>>x;
	l.push(x);
	cout<<endl;
	cout<<"O/P:";
	l.display();
	cout<<endl;
	l.pop();
	cout<<"O/P:";
	l.display();
	return 0;
}
