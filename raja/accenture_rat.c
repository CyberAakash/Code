#include<stdio.h>
int main(){
	int r,unit,n,arr[100],i,t,sum=0;
	scanf("%d",&r);
	scanf("%d",&unit);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	t=r*unit;
	for(i=0;i<n;i++){
		sum+=arr[i];
		if(sum>t){
			printf("%d",i+1);
			break;
		}
	}
}
