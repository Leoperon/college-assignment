#include<stdio.h>
#include<string.h>
int main()
{	
	for(int i=97;i<=101;i++)
	{
		for(int j=97;j<=i;j++)
		{
			printf("%s",char(j));
		}
		printf("\n");
	}
}
