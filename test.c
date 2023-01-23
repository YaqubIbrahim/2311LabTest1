#include <stdio.h>
int main(){
	int n,count;
	int array[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n-1;i++){
		if(array[i]>0){
			if(array[i+1]<0){
					count++;
			}
			}
	}
	printf("%d",count);
	printf("\n");
}
