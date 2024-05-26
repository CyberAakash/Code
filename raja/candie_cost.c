#include<stdio.h>
int main(){
	int k,m,i,j,c;
	scanf("%d%d",&k,&m);
	c=k;	
	while(j>0){
		j=j/10;
		c+=j;
	}
	printf("%d",c);
}
