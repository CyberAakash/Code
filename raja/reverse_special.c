#include<stdio.h>
int main(){
	char a[100],b[100],k[100];
	gets(a);
	int l=strlen(a),i,j,x=0;
	for(i=0;i<l;i++){
		if(isalpha(a[i])){
			b[x++]=a[i];
		}
	}
	j=x-1;
	for(i=0;i<x;i++){
		k[j--]=b[i];
	}
	x=0;
	for(i=0;i<l;i++){
		if((isalpha(a[i]))){
			a[i]=k[x++];
		}
	}
	puts(a);
}
