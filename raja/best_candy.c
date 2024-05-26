#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char a[100],b[100],temp;
	gets(a);
	strcpy(b,a);
	int l=strlen(a),i,j,flag=1;
	for(i=0;i<l;i++){
		b[i]=toupper(b[i]);
	}
	for(i=0;i<l;i++){
		if(b[i]<b[i+1]){
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
	}
	for(i=0;i<l;i++){
		if(b[0]==a[i]){
			flag=0;
		}
	}
	printf("%s\n",b);
	if(flag==0)
		printf("%c",b[0]);
	else
		printf("0");
}
