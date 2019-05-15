#include<stdio.h>
int Ackermann(int ,int );
int main()
{
	int a,b,i;
	printf("Enter any 2 numbers:");
	scanf("%d%d",&a,&b);
    i=Ackermann(a,b);
    printf("%d,%d=>%d",a,b,i);
}
int Ackermann(int m, int n)
{
        if (m == 0) 
		  return n + 1;
        else if (n == 0) 
		  return Ackermann(m - 1, 1);
		else
          return Ackermann(m - 1, Ackermann(m, n - 1));
}

