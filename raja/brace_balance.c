#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int i,j,n,l=strlen(s),flag=1;
	puts(s);
	if(l%2==1){
		printf("Unbalanced");
	}
	else{
		for(i=0;i<l;i++){
			if(s[i]=='('){
				for(j=i;j<l;j++){
					if(s[j]==')'){
						flag=0;
					}
					else if(s[j]=='('){
						flag=1;
					}
				}
			}
			if(s[i]==')'){
				for(j=i;j<l;j++){
					if(s[j]=='('){
						flag=0;
					}
					else if(s[j]==')'){
						flag=1;
					}
				}
			}
			if(s[i]=='['){
				for(j=i;j<l;j++){
					if(s[j]==']'){
						flag=0;
					}
					else if(s[j]=='['){
						flag=1;
					}
				}
			}
			if(s[i]==']'){
				for(j=i;j<l;j++){
					if(s[j]=='['){
						flag=0;
					}
					else if(s[j]==']'){
						flag=1;
					}
				}
			}
			if(s[i]=='{'){
				for(j=i;j<l;j++){
					if(s[j]=='}'){
						flag=0;
					}
					else if(s[j]=='{'){
						flag=1;
					}
				}
			}
			if(s[i]=='}'){
				for(j=i;j<l;j++){
					if(s[j]=='{'){
						flag=0;
					}
					else if(s[j]=='}'){
						flag=1;
					}
				}
			}
		}
		if(flag==0)
			printf("Balanced");
		else
			printf("Unbalanced");
	}
	return 0;
}
