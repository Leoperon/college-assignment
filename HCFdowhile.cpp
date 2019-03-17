#include<stdio.h>
int  main()
{
	int a,b;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	do
	{
		if(a > b)
            a -= b;
        else
            b -= a;
    }while(a!=b);
	printf("HCF=%d",a);
	return 0;
}
