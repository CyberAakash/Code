#include<stdio.h>
#include<string.h>
int x=0;
char b[100];
int main(){
	char a[100];
	gets(a);
	int i,j,l=strlen(a),occ[100],x=1;
	occ[0]=l-1;
	for(i=l-1;i>=0;i--){
		if(a[i]==' '){
			occ[x++]=i;
		}
	}
	occ[x]=0;
	for(i=0;i<x;i++){
		reverse(a,occ[i+1],occ[i]);
	}
	printf("%s",b);
}
void reverse(char a[100],int s,int l){
	int i;
	for(i=s;i<=l;i++){
		b[x++]=a[i];
	}
}
