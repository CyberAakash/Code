#include<stdio.h>
int main(){
	int n,unit,s,sum=0,d,mul=1;
	scanf("%d",&n);
	s=n;
	int a=n;
	unit=s%10;
	s=s/10;
	printf("Unit Digit is:%d\n",unit);
	printf("Balance is:%d\n",s);
	while(s>0){
		d=s%10;
		mul=d*2;
		sum=sum+mul;
		s=s/10;
	}
	printf("Sum:%d\n",sum);
	int t=sum/4;
	if(t==unit)
		printf("Success");
	else
		printf("Failed");
}
