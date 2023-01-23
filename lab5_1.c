#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char str[100];
	int len;
	scanf("%s",str);
	len=strlen(str);
	for(int i=1;i<=len;i++){
		if(str[i]-str[i-1]!=1){
			printf("Not consecutive");
			printf("\n");
			break;
		}
		if(islower(str[i])){
			printf("Consecutive and all small letters");
			printf("\n");
			break;
		}
		else
			if(isupper(str[i])){
				printf("Consecutive and all capital letters");
				printf("\n");
				break;
			}
	}
}
