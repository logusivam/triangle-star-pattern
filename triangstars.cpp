#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j;
	printf("enter the number of stars:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n;j++)
		{
			if(j<n-i||j>n+i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
				
			}
		}
		printf("\n");
	}
}
