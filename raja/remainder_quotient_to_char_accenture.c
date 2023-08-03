#include<stdio.h>
int main(){
	int n,m,t,x;
	scanf("%d %d",&n,&m);
	x=m;
	while(x>0){
		x=x/n;
		t=m-(n*x);
		if(x!=0){
			printf("Q:%d\n",x);
			if(t>9||t<=35){
				printf("R:%c\n",t+55);
			}
			else{
				printf("R:%d\n",t);
			}
		}
	}
	return 0;
}
