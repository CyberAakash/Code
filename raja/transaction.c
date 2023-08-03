#include<stdio.h>
int main(){
	int n,a[100],i,sum=0,flag=1,k=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]!=30){
		printf("Transaction is failed");
	}
	else{
		for(i=0;i<n;i++){
			if(a[i]==30){
				sum+=a[i];
				flag=0;
			}
			else{
				x=a[i]-30;
				if(x<=sum){
					flag=0;
				}
				else{
					sum+=x;
					flag=1;
					break;
				}
			}
		}
		printf("%d\n",sum);
		if(flag==0){
			printf("Transaction is Success");
		}
		else{
			printf("Transaction is failed");
		}
	}
}
