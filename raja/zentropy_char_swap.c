#include<stdio.h>
void main(){
	int n,i,j,a[100];
	char s[100],temp;
	scanf("%d",&n);
	printf("Character Array:\n");
	scanf("%s",s);
	printf("Integer Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=n;j>0;j--){
			if(a[i]==a[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("%s",s);
}                                                                                 
