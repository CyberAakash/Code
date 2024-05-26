#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int x=0,y=0,l,i;
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='z')
			x++;
		else if(s[i]=='o')
			y++;
	}
//	printf("%d %d",x,y);
	if((2*x)==y)
		printf("YES");
	else
		printf("NO");
}
