#include<stdio.h>//Ascending order //Insertion sort
int main()
{
	int i,n,ar[30],d,j,t;
	printf("Enter the number of values you want to enter:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1+i;j<=n;j++)
		{
			d=j;
			if(d>0 && ar[i]>ar[j])
			{
	            t=ar[j];
	            ar[j]=ar[i];
	            ar[i]=t;
			}
			d--;
		}
	}
	printf("your sorted array:\n");
	for(int i=1;i<=n;i++)
	{
		printf("%d",ar[i]);
	}
	return 0;
}
