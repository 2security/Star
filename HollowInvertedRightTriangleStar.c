#include<stdio.h>		

int main()
	{
	int n,i,j;
	
	printf("Enter how many row");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		{
		for(j=n;j>=i;j--)
			{
				if(i==1||j==n||i==j)
					printf("*");
				else
					printf(" ");
			}
		printf("\n");
		}
	printf("\n\n");
    	return 0;
	}	







