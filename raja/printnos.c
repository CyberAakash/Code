#include<stdio.h>
int main(){
	char s[100],b[100];
	int a[100],i,j;
	gets(s);
	int l=strlen(s),x=0,y=0,k;
	for(i=0;i<l;i++){
		if(isdigit(s[i]))
			a[x++]=s[i]-48;
		else if(isalpha(s[i]))
			b[y++]=s[i];
	}
	for(i=0;i<x;i++)
		printf("%d\n",a[i]);
//	x=0;
	for(i=0;i<x;i++){
		k=a[i];
		printf("%c",b[i]);
		while(k>1){
			printf("%c",b[i]);
			k--;
		}
	}
//	printf("%s",b);
	
}
