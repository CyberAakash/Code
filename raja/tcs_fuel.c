#include<stdio.h>
int main(){
	int n,a,b,c,d,i,j;
	scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
	int s[n],x[n];
	for(i=0;i<n;i++){
		s[i]=a+(i*b);
		x[i]=c+(i*d);
	}
	printf("\nAnswer:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i]==x[j]){
				printf("%d\n",s[i]);
			}
		}
	}
}
