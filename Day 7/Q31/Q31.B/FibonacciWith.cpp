#include<stdio.h>
int Fibonacci(int);
int main()
{
	int n,i;
	printf("Enter the limit of series:");
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
        printf("%d ", Fibonacci(i));
    }
}
int Fibonacci(int a)
{
  	if(a<=1)
  	{
  	   return a;
    }
	else
	{
	 return (Fibonacci((a-1))+Fibonacci((a-2)));
    }
}
