#include<stdio.h>
int main()
{
	 int n,t=1,p;
	 printf("Enter the no.\n");
	 scanf("%d",&n);
	 printf("Enter the power\n");
	 scanf("%d",&p);
	 for(int i=1;i<=p;i++)
	 {
	 	t=t*n;
	 }
	 printf("\nPower of %d = %d",n,t);
	 return 0;
}
