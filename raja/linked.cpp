#include<iostream>
using namespace std;
class node{
	int n;
	node* next;
	public:
		node();
		friend class list;
};
class list{
	node* head;
	public:
		int isEmpty();
		list();
		int insertB(int x);
		int insertM(int x);
		int insertE(int x);
		int deleteB();
		int deleteM();
		int deleteE();
		void display();
};
node::node(){
	n=0;
	next=NULL;
}
list::list(){
	head=NULL;
}
int list::isEmpty(){
	if(head==NULL){
		return 1;
	}
	else
		return 0;
}
int list::insertB(int x){
	node*l = new node();
	l->n=x;
	l->next=NULL;
	if(isEmpty()){
		head=l;
		l=NULL;
		delete l;
	}
	else{
		l->next=head;
		head=l;
		l=NULL;
		delete l;
	}
}
int list::insertE(int x){
	node*l = new node();
	l->n=x;
	l->next=NULL;
	if(isEmpty()){
		head=l;
		l=NULL;
		delete l;
	}
	else{
		node* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=l;
		l=NULL;
		delete l;
	}
}
void list::display(){
	node* temp=head;
		while(temp->next!=NULL)
			cout<<temp->n<<endl;
		cout<<temp->n<<endl;
}
int main(){
	list l;
	int x;
	cin>>x;
	l.insertB(x);
	l.display();
	cin>>x;
	l.insertB(x);
	l.display();
	return 0;
}
