#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int array [n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		int f=1;
		for(int j=1;j<m;j++)
		{
			if (array[i][j-1]>array[i][j])
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
			for(int j=0;j<m;j++)
			{
				printf("%5d",array[i][j]);
	}
		}
	
printf("\n");
}
}

