#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=n-i;k<=n;k++)
			printf("*");
			printf("\n");

	}
	return 0;
}
