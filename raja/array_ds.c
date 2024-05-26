#include<stdio.h>
int main(){
	int a[100],n,no,nos,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("Enter the index position to add new element");
	scanf("%d",&no);
	printf("Enter the new element");
	scanf("%d",&nos);
	if(no>n-1){
		printf("Enter a valid Index");
	}
	else{
		for(i=n;i>no;i--){
			a[i]=a[i-1];
		}
		a[i]=nos;
		for(i=0;i<n+1;i++){
			printf("%d ",a[i]);
		}
	}
	printf("Enter the index position to Update");
	scanf("%d",&no);
	printf("Enter the new element");
	scanf("%d",&nos);
	if(no>n-1){
		printf("Enter a valid Index");
	}
	else{
		a[no]=nos;
		for(i=0;i<n+1;i++){
			printf("%d ",a[i]);
		}
	}
	printf("Enter the index position to delete");
	scanf("%d",&no);
	if(no>n-1){
		printf("Enter a valid Index");
	}
	else{
		a[no]=-1;
		for(i=0;i<n+1;i++){
			if(a[i]!=-1){
				printf("%d ",a[i]);
			}
		}
	}
}
