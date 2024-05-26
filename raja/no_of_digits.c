#include<stdio.h>
int main(){
	int n,m,d,i,a[1000],x=0,l,k,cnt=0,c[1000],y=0;
	scanf("%d%d%d",&n,&m,&d);
	for(i=n;i<=m;i++){
		a[x++]=i;
	}
	for(i=0;i<x;i++){
		k=a[i];
		cnt=0;
		while(k>0){
			l=k%10;
			if(l==d){
				cnt++;
			}
			k=k/10;
		}
		c[y++]=cnt;
	}
	cnt=0;
	for(i=0;i<y;i++){
//		printf("%d",c[i]);
		cnt=cnt+c[i];
	}
	printf("\n%d",cnt);
}
