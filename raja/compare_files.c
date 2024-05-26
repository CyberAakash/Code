#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	char a[100][n];
	for(i=0;i<=n;i++){
		gets(a[i]);
	}
	for(i=0;i<n;i++){
		puts(a[i]);
		printf("\n");
	}
//	int x1,x2,x3,x4;
//	x1=strcmp(a1,a2);
//	x2=strcmp(a2,a3);
//	x3=strcmp(a3,a4);
//	x4=strcmp(a1,a4);
	return 0;
}
