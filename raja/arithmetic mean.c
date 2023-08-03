#include<stdio.h>
int main(){
	int n,a[100],sum=0,i,avg,tar;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	tar=avg*2;
	for(i=1;i<100;i++){
		if(((sum+i)/(n+1))==tar){
			printf("%d",i);
			break;
		}
	}
}
