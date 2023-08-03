#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	int l=strlen(a),i,j;
	for(i=1;i<l;i=i+2){
		if(a[i]=='A'){
			a[i+1]=a[i-1]&&a[i+1];
			a[i]=' ';
			a[i-1]=' ';
		}
		else if(a[i]=='B'){
			a[i+1]=a[i-1]||a[i+1];
			a[i]=' ';
			a[i-1]=' ';
		}
		else if(a[i]=='C'){
			a[i+1]=a[i-1]^a[i+1];
			a[i]=' ';
			a[i-1]=' ';
		}
	}
	printf("%d",a[i-1]);
	return 0;
}

