#include<stdio.h>
void main(){
	char s[100],k[100],temp;
	gets(s);
	gets(k);
	int l1=strlen(s),l2=strlen(k),i,j;
	for(i=0;i<l1;i++){
		for(j=i+1;j<l1;j++){
			if(s[i]>s[i+1]){
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
	}
	for(i=0;i<l1;i++){
		for(j=0;j<l2;j++){
			if(k[j]==s[i]){
				s[i]=k[l2++];
			}
		}
	}
	puts(s);
}
