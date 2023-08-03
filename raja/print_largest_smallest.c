#include<stdio.h>
int main(){
	int n,a[100],b[100],c[100],temp,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
		c[i]=a[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
			if(c[i]<c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n/2;i++){
		printf("%d",c[i]);
		printf(" %d ",b[i]);
	}
	if(n%2!=0){
		printf("%d",c[i]);
	}
}
