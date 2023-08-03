#include<stdio.h>
int main(){
	int x,a,n,z,k,i,j=2,l;
	scanf("%d%d",&x,&a);
	calc(x,a);
}
void calc(int x,int a){
	int i,j,l;
	for(i=1;i<100;i++){
		for(j=2;j<20;j++){
			if(i%j==0){
				l=(a*i)+j;
				if(l==x){
					printf("%d%d",i,j);
				}
			}
		}
	}
}
