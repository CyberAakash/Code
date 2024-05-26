#include<stdio.h>
#define new int
new main(){
	int n,i,j,arr[100],target;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&target);
	for(i=0;i<n;i++){
		if(arr[i]+arr[i+1]==target){
			printf("%d,%d",i,i+1);
		}
		else
			continue;
	}
	return 0;
}
