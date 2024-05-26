#include<stdio.h>
int main(){
	int n,m,i,len[100],d[100],x=0,y=0,j,num[100];
	printf("Enter N:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter M:");
		scanf("%d\n",&m);
		for(j=0;j<m;j++){
			scanf("%d",&len[x]);
			scanf("%d",&d[x]);
			x++;
		}
	}
	for(j=0;j<=m*2;j++){
		printf("%d",len[j]);
	}
	printf("\n");
	for(j=0;j<=m*2;j++){
		printf("%d",d[j]);
	}
	for(i=0;i<m*2;i++){
		for(j=0;j<len[i];j++){
			num[j]=d[i];
		}
	}
	for(j=0;j<=m*2;j++){
		printf("%d",num[j]);
	}
}
