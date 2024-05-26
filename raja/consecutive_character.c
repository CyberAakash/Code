#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),i,j,flag=1,cnt,c[100],x=0,sum=0;
	for(i=0;i<l;i++){
		cnt=1;
		while(s[i]==s[i+1]){
			i++;
			flag=0;
			cnt++;
		}
		c[x++]=cnt;
		printf("%c-%d\n",s[i],cnt);
	}
	for(i=0;i<x;i++){
		if(c[i]%2==0){
			sum+=c[i];
		}
	}
	printf("Sum:%d",sum);
}
