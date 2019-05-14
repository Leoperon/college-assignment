#include<stdio.h>//Matrix Transpose
int main()
{
	int i,n,ar[4][4],ar1[4][4],j,t=0;
	printf("Enter your 4*4 matrix:\n ");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&ar[i][j]);
		}	
	}
	printf("Your 4*4 matrix:\n ");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d  ",ar[i][j]);
		}	
		printf("\n");
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		   	ar1[j][i]=ar[i][j];
		}
	}
    printf("Your Transpose 4*4 matrix:\n ");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%5d  ",ar1[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
