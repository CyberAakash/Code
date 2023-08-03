#include<stdio.h>
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),i,j,d=0;
	for(i=0;i<l;i++){
		if(s[i]==' '){
			s[i]=s[i]-48;
			d+=s[i]*10;
			printf("%d\n",i);
		}
	}
}
