#include<stdio.h>
#include<string.h>
int main(){
	char s[100],temp[100],r[100];
	gets(s);
	int l=strlen(s),i,j,x=0,y=0;
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
			temp[x++]=s[i];
		}
	}
	printf("%s\n",temp);
	for(i=x-1;i>=0;i--){
		r[y++]=temp[i];		
	}
	printf("%s",r);
	x=0;
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
			s[i]=r[x++];	
		}
	}
	printf("\n%s",s);
}

