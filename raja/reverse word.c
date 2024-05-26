#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int l=strlen(a),i,j;
	gets(a);
	for(i=0;i<l;i++){
		if(a[i]==' ')
			printf("%d",i+1);
	}
}
