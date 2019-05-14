#include<stdio.h>
int main()
{
	int n,a=1,b=1,c=0;
	printf("Enter any no:");
    scanf("%d",&n);
    printf("%d%d",a,b);	
    c=a+b;
    while(n>=c)
    {
        printf("%d",c);	
	    a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
