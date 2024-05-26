#include<Stdio.h>
int main(){
	int n,m,a[100],b[100],x=0,y=0,i,dsum=0,nsum=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++){
		if(i%n!=0){
			b[y++]=i;
		}
		else{
			a[x++]=i;
		}
	}
	for(i=0;i<x;i++){
//		printf("%d\n",a[i]);
		dsum+=a[i];
	}
//	printf("\NB:\n");
	for(i=0;i<y;i++){
//		printf("%d\n",b[i]);
		nsum+=b[i];
	}
	printf("%d",abs(dsum-nsum));
}
