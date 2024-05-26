#include<stdio.h>
int main(){
	int r,c,i,j,x;
	scanf("%d",&r);
	scanf("%d",&c);
	int a[r][c],b[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[r][c]);
		}
	}
	for(i=r;i>0;i--){
		for(j=0;j<c;j++){
			b[i][j]=a[i][j];
		}
		x++;
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",b[r][c]);
		}
	}
}
