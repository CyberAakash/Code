#include<stdio.h>
int main(){
	char t[3][3];
	int i,j;
	printf("1st Player Enter:x\n2nd Player Enter:o");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&t[i][j]);
		}
	}	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(t[i][j]=='x'&& t[i][j+1]=='x' && t[i][j+2]=='x'){
				printf("1st Player Wins");
			}
			else if(t[i][j]=='x'&& t[i][j+1]=='x' && t[i][j+2]=='x'){
				printf("1st Player Wins");
			}
			else if(t[i][j]=='o'&& t[i][j+1]=='o' && t[i][j+2]=='o'){
				printf("1st Player Wins");
			}
			else if(t[i][j]=='o'&& t[i][j+1]=='o' && t[i][j+2]=='o'){
				printf("1st Player Wins");
			}
			else if(i==j){
				if(t[i][j]=='x'&& t[i][j+1]=='x' && t[i][j+2]=='x'){
					printf("1st Player Wins");
				}
				else if(t[i][j]=='o'&& t[i][j+1]=='o' && t[i][j+2]=='o'){
					printf("2nd Player Wins");
				}
				else{
					printf("Draw");
				}
			}
		}
	}
}
