#include<stdio.h>
int main(){
	int n,x,y,res;
	scanf("%d %d %d",&n,&x,&y);
	res=(y*(n-2))-(x*(n-2))+1;
	printf("%d",res);
}
