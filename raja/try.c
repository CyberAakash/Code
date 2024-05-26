#include <stdio.h>

int main(){
	int n,arr[100],i,b[100],c,x=0,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		c=arr[i];
		b[x++]=arr[i];
		count=0;
		for(j=i;j<n;j++)
			if(c==arr[j]){
				count++;
			}
		b[x++]=count;
	}
	for(i=0;i<n;i++)
		printf("%d",b[i]);
}

