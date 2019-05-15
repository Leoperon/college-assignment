#include<stdio.h>
int HCF(int ,int );
int main()
{
	int n,m,i;
	printf("Enter any 2 numbers:");
	scanf("%d%d",&n,&m);
    i=HCF(n,m);
    printf("%d,%d=>%d",n,m,i);
}
int HCF(int a,int b)
{
  	if(b==0)
  	{
  	   return a;
    }
	else
	{
	 return HCF(b,a%b);
    }
}
