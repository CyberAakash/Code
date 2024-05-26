#include<stdio.h>
int main(){
	int a[7],i,sal=0,d,k;
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++){
		if(i==0){
			sal+=a[0]*150;
		}
		else if(i==6){
			sal+=a[6]*125;
		}
		else{
			sal+=a[i]*100;
		}
		if(a[i]>8){
			d=(a[i]-8)*15;
			sal+=d;
		}
	}
	printf("%d",sal);
}
