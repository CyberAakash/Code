#include<stdio.h>
int main(){
	char s[100],a[100];
	gets(s);
	gets(a);
	int l1=strlen(s),l2=strlen(a),flag=0,i,j;
	if(l1==l2){
		for(i=0;i<l1;i++){
			for(j=0;j<l1;j++){
				if(s[i]!=s[j])
					flag=1;
					break;
			}
					
		}
		if(flag==0)
			printf("Anagrams");
		else
			printf("Not an Anagrams");
	}
	else{
		printf("Not an anagram");
	}
}
