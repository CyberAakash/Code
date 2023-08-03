#include<stdio.h>
#include<time.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],i,j,fsum=0,bsum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(i==j){
				fsum+=a[i][j];
			}
			if(i+j==n-1){
				bsum+=a[i][j];
			}
				
		}
	}
	printf("%d-%d",fsum,bsum);
	if(fsum==bsum){
		printf("Magic Square");
	}
	else{
		printf("Not a Magic Square");
	}
}
