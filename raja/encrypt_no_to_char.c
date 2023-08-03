#include<stdio.h>
void main(){
	int i,j,a[100],n,b[100],x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%c",a[i]+64);
	for(i=0;i<n;i++){
		x=a[i]*10+a[i+1];
		if(x<=26&&x>=1){
			printf("\n%c",x+64);
		}
	}

}
