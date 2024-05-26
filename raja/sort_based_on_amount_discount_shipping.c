#include<stdio.h>
int main(){
	int a[3],s[3],t[3],i;
	float d[3];
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		scanf("%f",&d[i]);
		scanf("%d",&s[i]);
		t[i]=((a[i]-((d[i]/100)*a[i]))+s[i]);
		printf("Total Cost:%d\n",t[i]);
	}
	printf("Choose ");
	if(t[2]<t[0]&&t[2]<t[1]){
		printf("Amazon");
	}
	else if(t[1]<t[0]&&t[1]<t[2]){
		printf("Snapdeal");
	}
	else if(t[0]<t[1]&&t[0]<t[2]){
		printf("Flipkart");
	}
	else{
		printf("Flipkart");
	}
}
