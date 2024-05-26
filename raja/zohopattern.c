#include<stdio.h>
int main(){
	int n,i,j,sp,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf(" ");
	}
	printf("0\n");
	for(i=1;i<=n;i++){
		for(sp=1;sp<=n-i;sp++){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			if(j>=sp)
				printf("%d",j);
		}
		printf("0\n");
	}
	for(i=5;i>=1;i--){
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
