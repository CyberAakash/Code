#include<stdio.h>
int main(){
	int p,q,x;
	scanf("%d %d",&p,&q);
	x=gcd(p,q);
	printf("%d",x);
	return 0;
}
int gcd(int p,int q){
	if(p==0)
		return q;
	else if(q==0)
		return p;
	else if(p==q)
		return p;
	else if(p>q)
		gcd(p-q,q);
	else
		gcd(p,q-p);
}
