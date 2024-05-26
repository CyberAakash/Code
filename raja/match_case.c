#include<stdio.h>
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),i,j,count;
	for(i=0;i<l;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	for(i=0;i<l;i++){
		count=1;
		for(j=i+1;j<l;j++){
			if(s[i]==s[j]){
				count++;
				s[j]=' ';
			}
		}
		if(s[i]!=' '){
			printf("%c:%d",s[i],count);
		}
	}
	return 0;
}
