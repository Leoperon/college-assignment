#include<stdio.h>//Ascending order
int main()
{
	int i,n,ar[30],j,t;
	printf("Enter the number of values you want to enter:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(ar[i]<ar[j])
			{
	            t=ar[j];
	            ar[j]=ar[i];
	            ar[i]=t;
			}
		}
	}
	printf("your sorted array:\n");
	for(int i=1;i<=n;i++)
	{
		printf("%d",ar[i]);
	}
	return 0;
}
