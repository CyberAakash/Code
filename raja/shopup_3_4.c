#include<stdio.h>
#include<math.h>
int main(){
	int k,i,s;
	float n;
	scanf("%f",&n);
	scanf("%d",&k);
	for(i=0;i<k-1;i++){
		s=ceil(n/k);
//		s=ceil(s);
		printf(" %d ",s);
		s=n-s;
	}
	s=floor(n/k);
	printf(" %d ",s);
}
