#include<stdio.h>
int main(){
	int i,j,k,l,x=0,p;
	char s[100];
	gets(s);
	l=strlen(s);
	p=l/2;
	for(i=l;i<l+p;i++){
		s[i]=s[x++];
	}
	x=0;
	for(i=p;i<l+p;i++){
		s[x++]=s[i];
	}
	for(i=0;i<l;i++){
		for(j=l;j>i;j--){
			printf(" ");
		}
		x=0;
		for(k=i;k>=0;k--){
			printf("%c ",s[x++]);
		}
		printf("\n");
	}
}
