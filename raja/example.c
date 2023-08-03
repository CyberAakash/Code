#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int dot=0,ch=0,i,digit=0;
	gets(s);
	int l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='.'){
			dot++;
		}
		if(isalpha(s[i])){
			ch++;
		}
		if(isdigit(s[i])){
			digit++;
		}
	}
	if(dot==3&&ch==3&&digit==3)
		printf("True");
	else
		printf("False");
	return 0;
}
