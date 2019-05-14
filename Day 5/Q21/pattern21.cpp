#include<stdio.h>
int main()
{
	int i,j;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(i==j)
			{
		       printf("1");
	        }
	        else
	        {
			   printf("0");
		    }
		}
		printf("\n");
	}
	//printf("Your 4*4 matrix:\n ");
	return 0;
}
