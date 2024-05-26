#include<stdio.h>
#include<string.h>
int main(){
	char r1[10],r2[10],r3[10];
	int l1,l2,l3,ir1[3],ir2[3],ir3[3],x=0,i,arr[3][3],j,res;
	gets(r1);
	gets(r2);
	gets(r3);
	l1=strlen(r1);
	l2=strlen(r2);
	l3=strlen(r3);
	for(i=0;i<l1;i++){
		if(r1[i]!=' '){
			ir1[x++]=r1[i]-48;
		}
	}
	x=0;
	for(i=0;i<l2;i++){
		if(r2[i]!=' '){
			ir2[x++]=r2[i]-48;
		}
	}
	x=0;
	for(i=0;i<l3;i++){
		if(r3[i]!=' '){
			ir3[x++]=r3[i]-48;
		}
	}
	x=0;
	for(i=0;i<3;i++){
		arr[0][x++]=ir1[i];
	}
	x=0;
	for(i=0;i<3;i++){
		arr[1][x++]=ir2[i];
	}
	x=0;
	for(i=0;i<3;i++){
		arr[2][x++]=ir3[i];
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	res=(arr[0][0]*((((arr[1][1])*(arr[2][2]))-((arr[2][1])*(arr[1][2])))))-
		(arr[0][1]*((((arr[1][0])*(arr[2][2]))-((arr[2][0])*(arr[1][2])))))+
		(arr[0][2]*((((arr[1][0])*(arr[2][1]))-((arr[2][0])*(arr[1][1])))));
	printf("\nDeterminant:%d\n",res);
}
