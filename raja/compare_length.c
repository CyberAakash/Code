#include<stdio.h>
#include<string.h>
int main(){
	char s[100],b[100];
	gets(s);
	gets(b);
	int l=strlen(s),i,j,a[100],cnt,c[100],flag=1,x=0;
	for(i=0;i<l;i++){
		cnt=0;
		if(s[i]==s[i+1]){
				cnt++;
				s[i+1]=' ';
		}
		a[x++]=cnt;
	}
	x=0;
	for(i=0;i<l;i++){
		cnt=0;
		if(b[i]==b[i+1]){
			cnt++;
			b[i+1]=' ';
		}
		c[x++]=cnt;
	}
	for(i=0;i<x;i++){
		if(a[i]!=c[i])
			flag=0;
	}
	if(flag==1)
		printf("Valid");
	else
		printf("Invalid");
}
