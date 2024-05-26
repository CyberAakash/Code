#include<stdio.h>
int y,b[100];
int main(){
	int n,b[100],k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		compare(b,i,k);
	}
	for(i=0;i<y;i++)
		printf("%d\t",b[i]);
}
void compare(int a[],int s,int k){
	int i,j,t;
	for(i=s;i<s+k;i++){
		printf("%d\t",a[i]);
	}
	for(i=s;i<s+k;i++){
		for(j=i+1;j<s+k;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nResult:\n");
	for(i=s;i<s+k;i++){
		printf("%d\t",a[i]);
		
	}
	printf("\n");
	b[y++]=a[s];
}
