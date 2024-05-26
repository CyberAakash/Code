#include<stdio.h>
int main(){
	int a[100],b[100],n,i,k,c[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n;i++){
		k=b[i];
		a[i]=a[k];
	}
	printf("Result:\n");
	for(i=1;i<=n;i++)
		printf("%d\n",a[i]);
}
