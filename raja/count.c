#include<stdio.h>
#include<string.h>
int main(){
	char s[100],c;
	gets(s);
	int l=strlen(s),i,j,count;
	for(i=0;i<l;i++){
		count=0;
		c=s[i];
		for(j=i+1;j<l;j++){
			if(c==s[j]){
				count++;
				s[j]=' ';
			}
		}
		if(c!=' '){
			printf("%c%d",c,count+1);
		}
	}
	return 0;
}
