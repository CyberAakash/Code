#include<stdio.h>
int main(){
	int n,d;
	printf("Enter a two digit number:");
	scanf("%d",&n);
	if(n==0||10>=n||n<=19||1>=n||n<=9)
		switch(n){
			case 0:
				printf("Zero");
				break;
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;	
			case 9:
				printf("Nine");
				break;	
			case 10:
				printf("Ten");
				break;
			case 11:
				printf("Eleven");
				break;
			case 12:
				printf("Twelve");
				break;
			case 13:
				printf("Thirteen");
				break;
			case 14:
				printf("Fourteen");
				break;
			case 15:
				printf("Fifteen");
				break;
			case 16:
				printf("Sixteen");
				break;
			case 17:
				printf("Seventeen");
				break;	
			case 18:
				printf("Eighteen");
				break;	
			case 19:
				printf("Nineteen");
				break;	
	}
	else if(20>=n||n<=99){
		int x=n;
		int a=n;
		d=x%10;
		x=x/10;
		switch(x){
			case 2:
				printf("Twenty");
				break;
			case 3:
				printf("Thirty");
				break;
			case 4:
				printf("Fourty");
				break;
			case 5:
				printf("Fifty");
				break;
			case 6:
				printf("Sixty");
				break;
			case 7:
				printf("Seventy");
				break;
			case 8:
				printf("Eighty");
				break;	
			case 9:
				printf("Ninty");
				break;
			default:
				printf("Enter Two digit Number");
				break;
		}
		printf(" ");
		switch(d){
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;	
			case 9:
				printf("Nine");
				break;	
			default:
				printf("");
				break;		
		}
	}
}
