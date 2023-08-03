#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],c,sum=0,k,i;
	scanf("%d",&c);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	k=ceil((float)sum/c);
	printf("%d",k);
}
