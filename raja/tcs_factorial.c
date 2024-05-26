#include<stdio.h>
int main(){
	int n,x,d;
	scanf("%d",&n);
	if(n==0&&n==1){
		printf("1");
	}	
	else{
		x=fact(n);
		//printf("%d",x);
		while(x>0){
			d=x%10;
			if(d!=0){
				printf("%d",d);
				break;
			}
			else{
				x=x/10;
			}
		}
	}
}
int fact(int n){
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}
