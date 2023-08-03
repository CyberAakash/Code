#include<stdio.h>
int main(){
	int n,a[100],i;
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	a[2]=1;
	for(i=3;i<13;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[n-1]);
}
