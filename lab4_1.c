#include <stdio.h>
int main()
{
	int N,start,end;
	int base=10;
	int i,j,r,s;
	int power=1;
	int power2=1;
	scanf("%d%d%d",&N,&start,end);
	for(i=1;i<=end;i++)
	{
		power=power*base;
	}
	for(j=1;j<=start;j++)
	{
		power2=power2*base;
	}
	r=N/power2;
	s=r%power;
	printf("%d",s);	
	return 0;
}

