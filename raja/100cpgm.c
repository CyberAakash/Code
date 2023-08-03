#include<stdio.h>
int main(){
	int n,i,arr[100],j;
	scanf("%d",&n);
	for(i=0;n>0;i++){
		arr[i]=n%2;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
		printf("%d ",arr[j]);
}
