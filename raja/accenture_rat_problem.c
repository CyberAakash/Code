#include<Stdio.h>
int main(){
	int r,u,n,a[100],t,sum=0,i;
	scanf("%d%d%d",&r,&u,&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	t=r*u;
	for(i=0;i<n;i++){
		sum+=a[i];
		if(sum>=t){
			printf("%d",i+1);
			break;
		}
	}
}
