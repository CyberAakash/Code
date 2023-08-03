#include<stdio.h>
int main(){
	int n,arr[100],i,j,x,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int b[n];
	for(i=0;i<n;i++){
		x=arr[i];
		int count=0;
		for(j=i+1;j<n;j++){
			if(x<arr[j]){
				count++;
			}
		}
		b[l++]=count;
	}
	for(i=0;i<n;i++){
		printf("%d",b[i]);
	}
	
}
