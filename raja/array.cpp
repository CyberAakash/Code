#include<iostream>
using namespace std;
int main(){
	int n,arr[100],pos,val;
	cout<<"Enter N:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<"Enter the position to insert new Element:";
	cin>>pos;
	if(pos-1>n){
		cout<<"Enter a valid Position";
	}	
	else{
		cout<<"Enter Element";
		cin>>val;
		for(int i=n-1;i>=pos-1;i--){
			arr[i+1]=arr[i];
		}
		arr[pos-1]=val;
		for(int i=0;i<n+1;i++){
			cout<<arr[i];
		}
	}
	cout<<"Enter the position to delete:";
	cin>>pos;
	if(pos-1>n){
		cout<<"Enter a valid Position";
	}	
	else{
		for(int i=pos;i<=n;i++){
			arr[i-1]=arr[i];
		}
		for(int i=0;i<n;i++){
			cout<<arr[i];
		}
	}
	cout<<"Enter the position to insert new Element:"<<endl;
	cin>>pos;
	if(pos-1>n){
		cout<<"Enter a valid Position";
	}	
	else{
		cout<<"Enter Element";
		cin>>val;
		arr[pos-1]=val;
		for(int i=0;i<n;i++){
			cout<<arr[i];
		}
	}
	return 0;
}
