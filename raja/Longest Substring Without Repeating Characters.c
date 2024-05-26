#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	gets(a);
	int l=strlen(a),i,j,cnt=0,x=0;
	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			if(a[i]==a[j]){
				cnt++;
				a[j]=' ';
			}
		}
		if(a[i]!=' ')
			b[x++]=a[i];
	}
	j=strlen(b);
	printf("%d",j);
	return 0;
}
