#include<stdio.h>
int main(){
	int n,a[100],x=0,i,flag=1,k;
	scanf("%d%d",&n,&k);
	for(i=1;i<n;i++){
		if(n%i==0){
			a[x++]=i;
		}
	}
	for(i=0;i<x;i++){
		if(((a[i]*a[i+1])==k)&&(k<=n)){
			printf("\n%d %d",a[i],a[i+1]);
			flag=0;
		}
	}
	if(flag==0)
		printf("YES\n");
	else
		printf("NO\n");
}
