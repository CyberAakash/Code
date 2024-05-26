#include<stdio.h>
int main(){
	int s[100],n,i,j,no;
top:	printf("Enter the no:");
	scanf("%d",&n);
	if(n<3)
		goto top;
	printf("\nEnter the Value to compute the sum:");
	scanf("%d",&no);
	printf("Enter the Values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			int sum=s[i]+s[j]+s[j+1];
			if(sum==no){
				printf("Index Values are:%d %d %d\nResult: %d\n",i,j,j+1,sum);
			}
		}
	}	
}
