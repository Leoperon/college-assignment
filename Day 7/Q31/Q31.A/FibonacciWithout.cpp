#include<stdio.h>
int Fibonacci(int);
int main()
{
	int n;
	printf("Enter the limit of series:");
	scanf("%d",&n);
	Fibonacci(n);
}
int Fibonacci(int a)
{
	int i,b=0,c=1,m;
	printf("%d,%d,",b,c);
    for(i=1;i<=a;i++)
    {
    	m=b+c;
    	printf("%d,",m);
    	b=c;
    	c=m;
	}
	return 0;
}
