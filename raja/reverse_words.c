#include<stdio.h>
#include<string.h>
char b[100];
int y=0;
void rev(char a[],int s,int e);
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),i,j,a[100],x=0;
	a[x++]=l-1;
	for(i=l-1;i>=0;i--){
		if(s[i]==' '){
			a[x++]=i;
		}
	}
	a[x++]=0;	
	for(i=0;i<x;i++){
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
	for(i=s;i<=e;i++){
		if(a[i]!=' '||a[i+1]!=' '){
			b[y++]=a[i];
		}
	}
}

