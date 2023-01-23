#include <stdio.h>
int main(){
	int r,c;
	int array[r][c];
	int array2[r][c];
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&array[i][j]);
					}
					}
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	array2[i][j]=array[i][c+2];
	}
	}
	printf("%d",array2);
	printf("\n");
	}

