#include<stdio.h>
#include<string.h>
int main(){
	int len,i,j;
	char str[100];
	gets(str);
	len=strlen(str);
//	printf("%s,%d",str,len);
	if(len%2!=0){
		printf("Not Balanced");
	}
	else{
		for(i=0;i<len;i++){
			if(str[i]=='['){
				for(j=i+1;j<len;j++){
					if(str[j]==']'){
						printf("Balanced");
						goto end;
					}
					else if(str[j]=='['){
						printf("Not Balanced\n");
						goto end;
					}
				}
			}
			else if (str[j]==']'){
				printf("Not Balanced");
				goto end;
			}
			else if(str[i]=='('){
				for(j=i+1;j<len;j++){
					if(str[j]==')'){
						printf("Balanced");
						goto end;
					}
					else if(str[j]=='('){
						printf("Not Balanced\n");
						goto end;
					}
				}
			}
			else if (str[j]==')'){
				printf("Not Balanced");
				goto end;
			}
			else if(str[i]=='{'){
				for(j=i+1;j<len;j++){
					if(str[j]=='}'){
						printf("Balanced");
						goto end;
					}
					else if(str[j]=='{'){
						printf("Not Balanced\n");
						goto end;
					}
				}
			}
			else if (str[j]=='}'){
				printf("Not Balanced");
				goto end;
			}
		}
	}
end: printf("");
}
