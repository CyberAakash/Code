#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100],temp,i,j;
	int l1,l2;
	gets(s1);
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2){
		for(i=0;i<l1;i++){
			if(s1[i]>=65 && s1[i]<=90){
				s1[i]=s1[i]+32;
			}
			if(s2[i]>=65 && s2[i]<=90){
				s2[i]=s2[i]+32;
			}
		}
		for(i=0;i<l1;i++){
			for(j=i+1;j<l1;j++){
				if(s1[i]>s1[j]){
					temp=s1[i];
					s1[i]=s1[j];
					s1[j]=temp;
				}
				if(s2[i]>s2[j]){
					temp=s2[i];
					s2[i]=s2[j];
					s2[j]=temp;
				}	
			}
		}
		l2=strcmp(s1,s2);
		printf("%s\n",s1);
		printf("%s",s2);
		if(l2==0)
			printf("They are anagrams");
		else
			printf("They aren't anagram");
	}
	else{
		printf("They can't be an Anagram");
	}
	
}
