#include<stdio.h>
int main()
{
	int n;
	double sum=1.0;
	printf("enter the no.\n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		sum=(sum*i+1)/i;
	}
	printf("SUM=%f",sum);
	return 0;
}
