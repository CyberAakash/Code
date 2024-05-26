#include<stdio.h>
int main(){
	int a[100],b[100],n1,n2,i,j,c[100],l,x=0,tmp;
	printf("Enter N1:");
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	printf("Enter N2:");
	scanf("%d\n",&n2);
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	printf("\n1st Array:");
	for(i=0;i<n1;i++)
		printf(" %d ",a[i]);
	printf("\n2nd Array:");
	for(i=0;i<n2;i++)
		printf(" %d ",b[i]);
	for(i=0;i<n1;i++)
		c[i]=a[i];
	l=n1+n2;
	for(j=i;j<l;j++,x++)
		c[j]=b[x];
	printf("\nMerged Array:");
	for(i=0;i<l;i++)
		printf(" %d ",c[i]);
	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			if(c[i]>c[j]){
				tmp=c[i];
				c[i]=c[j];
				c[j]=tmp;
			}
		}
		printf(" %d ",c[i]);
	}
	printf("\nSorted Array:");
	for(i=0;i<l;i++)
		printf(" %d ",c[i]);
	printf("\nMaximum Element in an array:%d",c[l-1]);
}
