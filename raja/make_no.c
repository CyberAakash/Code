#include<stdio.h>
int main(){
	int a[100],n,i,j,cnt[100],no[100],x=0,y=0,k,t[100],m=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<2*n;i++){
		scanf("%d",&a[i]);
		if(i%2==0){
			cnt[x++]=a[i];
		}
		else{
			no[y++]=a[i];
		}
	}
	y=0;
	for(i=0;i<x;i++){
		k=cnt[i];
		while(k>0){
			t[m++]=no[y];
			k--;
		}
		y++;
	}
	for(i=0;i<m;i++)
		sum=sum+t[i];
	printf("%d",sum);
	return 0;
}
