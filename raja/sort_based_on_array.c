#include<stdio.h>
#include<string.h>
void main(){
	char s[100],k[100],temp;
	gets(s);
	gets(k);
	int l=strlen(s),l2=strlen(k),i,j;
	for(i=0;i<l;i++){
		for(j=i;j<l;j++){
			if(s[i]>s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	puts(s);
	for(i=0;i<l;i++){
a:		for(j=0;j<l2;j++){
			if(s[i]==k[j]){
				goto l1;
			}
			else{
				break;
			}
		}
l1:		k[j++]=s[i];
		goto a;
	}
	puts(k);
}
