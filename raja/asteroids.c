#include<stdio.h>
int main(){
	int a[100],i,j,n,b[100],x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0)
			b[x++]=max(a[i],a[i+1]);
		if(a[i]==abs(a[i+1]))
			continue;
		else
			b[x++]=a[i];
	}
	for(i=0;i<x-2;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}
int max(int a,int b){
	if(abs(a)>abs(b))
		return a;
	else
		return b;
}
