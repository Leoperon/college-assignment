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
	if(a==0)
	  return 1;
	else
	  return (a*(factorial(a-1)));
}

