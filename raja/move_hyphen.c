#include<stdio.h>
#include<string.h>
int main(){
	char s[100],c[100];
	gets(s);
	int l=strlen(s),i,j,x=0;
	printf("%d\n",l);
	for(i=0;i<l;i++){
		if(s[i]=='-'){
			c[x++]=s[i];
			s[i]=' ';
		}
	}
	for(i=0;i<l;i++){
		if(s[i]!=' '){
			c[x++]=s[i];
		}
	}
	printf("%s",c);
}
