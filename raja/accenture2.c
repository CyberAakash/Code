#include<stdio.h>
int main(){
	int arr[100],b[100];
	int n,i,j,odd[50],even[50],x=0,y=0,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(i%2==0)
			even[x++]=arr[i];
		else if(i%2!=0)
			odd[y++]=arr[i];
	}
	for(i=0;i<x;i++)
		for(j=i+1;j<x;j++){
			if(even[i]<even[j]){
				temp=even[i];
				even[i]=even[j];
				even[j]=temp;
			}
			if(odd[i]<odd[j]){
				temp=odd[i];
				odd[i]=odd[j];
				odd[j]=temp;
			}
		}
//	for(i=0;i<y;i++){
//		for(j=i+1;j<y;j++){
//			if(odd[i]<odd[j]){
//				temp=odd[i];
//				odd[i]=odd[j];
//				odd[j]=temp;
//			}
//		}
//	}
	temp=even[1]+odd[1];
	printf("Output:%d",temp);
}
