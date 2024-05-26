#include<stdio.h>
int main(){
	int n,i,space,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(space=0;space<i;space++){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			if(j%2==0)
				printf("*");
		}
		printf("\n");
	}
}
