#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int l=strlen(s);
	int x=0,num=0,b[100],i;
	for(i=0;i<l;i++){
		if(s[i]!=' '){
			num+=(s[i]-48)*10;
			b[x++]=num;
		}
	}
	for(i=0;i<3;i++){
		printf("%d",b[i]);
	}
}
