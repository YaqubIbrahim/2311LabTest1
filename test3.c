#include <stdio.h>
int main(){
	int r,c,i,j;
	int a[10][10];
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
	printf("\n\n");
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			printf("%d   ",a[i][j]);
			printf("\n");}
	}
	return 0;
}
