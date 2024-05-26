#include<stdio.h>
int main(){
	int a[100],b[100],n1,n2,i,n,x=0,med;
	printf("1ST ARRAY:\n");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	printf("2nd ARRAY:\n");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	n=n1+n2;
	for(i=n1;i<n;i++)
		a[i]=b[x++];
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	if(n%2==1){
		med=a[n/2];
	}
	else{
		med=(a[n/2]+a[(n/2)+1])/2;
	}
	printf("\n%d",med);
	return 0;
}
