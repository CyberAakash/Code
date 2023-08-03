#include<stdio.h>
#include<string.h>
char b[100];
int y=0;
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),i,j,a[100],x=0;
	a[x++]=0;
	for(i=0;i<l;i++){
		if(s[i]==' '){
			a[x++]=i;
		}
	}
	a[x++]=l-1;
	for(i=0;i<x-1;i++){
		rev(s,a[i+1],a[i]);
		b[y++]=' ';
	}
	for(i=1;i<y;i++)
		if(b[i]!=' '||b[i+1]!=' '){
			printf("%c",b[i]);
		}
}
void rev(char a[],int s,int e){
	int i;
	printf("%d-%d\n",s,e);
	for(i=s;i>=e;i--){
		b[y++]=a[i];
	}
}
