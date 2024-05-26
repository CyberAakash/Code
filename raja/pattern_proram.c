#include<stdio.h>
void main(){
	int i,j,k,l,s,x=0;
	char a[100],ne[100];
	gets(a);
	l=strlen(a);
	s=l/2;
	for(i=s;i<l;i++){
		ne[x++]=a[i];
	}
	for(i=0;i<s;i++){
		ne[x++]=a[i];
	}
	//printf("%s",ne);
	for(i=0;i<=l;i++){
		for(j=i;j<l;j++){
			printf(" ");
		}
		x=0;
		for(k=i;k>0;k--){
			printf("%c",ne[x++]);
		}
		printf("\n");
	}
}
