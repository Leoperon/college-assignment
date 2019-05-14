#include<stdio.h>//Matrix largest number
int main()
{
	int i,n,ar[5][5],j,max=0;
	printf("Enter your 5*5 matrix:\n ");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d",&ar[i][j]);
		}	
	}
	max=ar[0][0];
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(max<ar[i][j])
			{
	           max=ar[i][j];
			}
		}
	}
	printf("Largest array:%d\n",(max-1));
	return 0;
}
