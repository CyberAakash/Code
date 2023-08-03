#include<stdio.h>
int main(){
	int n,digit=0,i;
	printf("Enter a number");
	scanf("%d",&n);
	int t=n;
	int a=n;
	for(i-0;i<5;i++){
		int l=reverse(a);
		printf("Reverse:%d\n",l);
		int t=a+l;
		printf("Sum:%d\n",t);
		int tmp=reverse(t);
		printf("Reverse:%d\n",tmp);
		if(tmp==t){
				printf("Palindrome\n");
				goto end;
		}
		else{
				printf("Not A Palindrome\n");
				a=t;
		}
	}
	end:printf("");
}
int reverse(int n){
	int q,rev=0,d;
	while(n>0){
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	return rev;
}
