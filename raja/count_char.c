#include<stdio.h>
int main(){
	char s[100],c[100];
	int i,j,l,b[100],x=0,y=0,d;
	gets(s);
	l=strlen(s);
	for(i=1;i<l;i=i+2){
		b[x++]=s[i]-48;
	}
	for(i=0;i<l;i=i+2){
		c[y++]=s[i];
	}
	for(i=0;i<x;i++){
		printf("%d ",b[i]);
	}
	for(i=0;i<y;i++){
		printf("%c ",c[i]);
	}
	printf("\n");
	for(i=0;i<=x-1;i++){
		d=b[i];
		printf("%c",c[i]);
		while(d>1){
			printf("%c",c[i]);
			d--;
		}
		printf("\n");
	}
}
