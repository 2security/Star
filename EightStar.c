#include<stdio.h>
int main()
	{
		int i,j,n,k;
		printf("Enter value of n");
		scanf("%d",&n);
		
		for(i=1;i<=2*n-1;i++)
			{
				for(j=1;j<=n;j++)
					{
						if(i==1&&j!=1&&j!=n||i!=1&&j==1&&i!=n&&i!=2*n-1||
						i!=1&&j==n&&i!=n&&i!=2*n-1||i==n&&i!=j&&j!=1||i==2*n-1&&j!=1&&j!=n)
							printf("*");
						else 
							printf(" ");
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
