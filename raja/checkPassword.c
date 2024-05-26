#include<stdio.h>
int main(){
	char s[100];
	gets(s);
	int l=strlen(s),k=checkPassword(s,l);
	printf("%d",k);
}
int checkPassword(char s[],int l){
	int c=0,n=0,cp=0,i;
	if(isdigit(s[0])){
		return 0;
	}
	else{
		for(i=0;i<n;i++){
			if(isalpha(s[i])){
				c++;
			}
			else if(isdigit(s[i])){
				n++;
			}
			else if(s[i]>=65||s[i]<=90){
				cp++;
			}
			else if(s[i]==' '||s[i]=='/'){
				return 0;
			}
		}
		if(c>=4&&n>=1&&cp>=1){
			return 1;
		}
		else{
			return 0;
		}
	}
}
