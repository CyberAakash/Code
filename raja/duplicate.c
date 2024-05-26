#include<Stdio.h>
int main(){
	int n,arr[100],i,j,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		int c=arr[i];
		for(j=i+1;j<n;j++){
			if(arr[j]==c){
				arr[j]=-1;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
		if(arr[i]!=-1)
			printf("%d\n",arr[i]);
}
