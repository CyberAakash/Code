#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	gets(str);
	int arr[100],i,j,num=0,l=strlen(str),x;
	for(i=0;i<l;i++){
		num=(str[i]-48);
		num=num*10;
		printf("%d\n",num);
	}
}
