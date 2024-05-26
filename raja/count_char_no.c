#include<stdio.h>
int main(){
	char s[100],c[100],d[100];
	int l,i,j,b[100],x=0,count;
	gets(s);
	l=strlen(s);
	strcpy(d,s);
	for(i=0;i<l;i++){
		count=1;
		for(j=i+1;j<l,s[j]!=' ';j++){
			if(s[i]==s[j]){
				if(s[j]!=' ')
					count++;
					s[j]=' ';
			}
		}
		b[x++]=count;
//		c[x++]=s[i];
	}
	for(i=0;i<x;i++)
		printf("%d ",b[i]);
	for(i=0;i<x;i++)
		printf("%c ",s[i]);
}
