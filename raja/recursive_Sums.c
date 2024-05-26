#include<stdio.h>
int main(){
	int m,s[100],l=0,i;
	scanf("%d",&m);
	while(m>0){
		int n,a[100],b[100],i,c[100],k,x=0,sum=0,d,t=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d%d",&a[i],&b[i]);
		}
		for(i=0;i<n;i++){
			k=a[i];
			while(k>0){
				c[x++]=b[i];
				k--;
			}		
		}	
		for(i=0;i<x;i++){	
			sum+=c[i];
		}
//		printf("%d",sum);
		x=sum;
l1:		while(x!=0){
			d=x%10;
			t+=d;
			x=x/10;
		}
		if(t==10){
			t=1;
		}
		s[l++]=t;
		m--;
	}	
	for(i=0;i<l;i++){
		printf("\n%d",s[i]);
	}
}
