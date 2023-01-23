#include <stdio.h>
int main(){
	int r,c;
	scanf("%d %d",&r,&c);
	int array[r][c];
	int array2[r][c];

for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		scanf("%d",&array[i][j]);
	}
}
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		scanf("%d",&array2[i][j]);
				}
				}
				
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		if(array[i][j]<array2[i][j]){
			printf("NO");
			printf("\n");
			break;
		}
			else{
				printf("Yes");
				printf("\n");

			}
		}
	}

}

