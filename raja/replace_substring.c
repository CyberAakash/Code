#include<stdio.h>
int main(){
	char s[100],s1[100],cpy[100];
	gets(s);
	int l=strlen(s),i,j,st,e,x=0;
	printf("Enter Start Position:");
	scanf("%d",&st);
	printf("Enter the Substring:");
	scanf("%s",s1);
	int l2=strlen(s1);
	for(i=0;i<st;i++){
		s[x++]=s[i];
	}
	for(i=0;i<l2;i++){
		s[x++]=s1[i];
	}
	for(i=x;i<l;i++){
		s[x++]=s[i];
	}
	printf("%s",s);
}
