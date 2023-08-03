#include<stdio.h>
#include<string.h>
char b[100];
int y=0;
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),i,j,occ[100],x=1;
	occ[0]=l-1;
	for(i=l-1;i>=0;i--){
		if(s[i]==' '){
			occ[x++]=i;
		}
	}
	occ[x]=0;
	for(i=0;i<x;i++){
		reverse(occ[i+1],occ[i],s);
//		b[y++]=' ';
	}
	printf("\n%s",b);
}
void reverse(int start,int last,char a[]){
	int i;
	for(i=start;i<=last;i++){
		b[y++]=a[i];
	}
}
