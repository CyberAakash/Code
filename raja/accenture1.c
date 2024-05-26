#include<stdio.h>
int main(){
	int n,i,j,m,with=0,without=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=n;i<=m;i++){
		if(i%n==0){
			printf("%d\n",i);
			with+=i;
		}
	}
	for(i=1;i<=m;i++){
		if(i%n!=0){
			printf("%d\n",i);
			without+=i;
		}
	}
	printf("%d\n",with);
	printf("%d\n",without);
	int res=without-with;
	printf("%d",res);
}
