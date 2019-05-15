#include<stdio.h>
int factorial(int );
int main()
{
	int x,m;
	printf("Enter any number:");
	scanf("%d",&x);
    m=factorial(x);
    printf("%d",m);
	
}
int factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}

