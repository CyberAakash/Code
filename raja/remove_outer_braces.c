#include<stdio.h>
int main(){
	char s[100],t[100];
	gets(s);
	int l=strlen(s),i,j=0,y=0;
	for(i=0;i<l;i++){
		if(s[i]==41){
			j--;
		}
		if(j!=0){
			t[y++]=s[i];
		}
		if(s[i]==40){
			j++;
		}
	}
	printf("%s",t);
}
