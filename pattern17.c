#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			
		}
	}
	for(i=n-1;i>=1;i--,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
	}
}

