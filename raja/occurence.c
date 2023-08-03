#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,j,o,b[100],x=0;
	printf("Enter the String:");
	gets(a);
	int l=strlen(a);
	printf("%s,%d",a,l);
	for(i=0;i<l;i++){
		char c=a[i];
		o=0;
		for(j=i+1;j<l;j++){
			if(c==a[j]){
				o++;
				a[j]=' ';
			}
		}
		if(a[i]!=' ')
			printf("%c%d",c,o+1);
			b[x++]=o+1;
	}
//	printf("%s\n",a);
//	for(i=0;i<x;i++){
//		printf("%d",b[i]);
//	}
}
