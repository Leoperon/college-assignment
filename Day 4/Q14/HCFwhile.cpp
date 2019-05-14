#include<stdio.h>
int  main()
{
	int a,b;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	while(a!=b)
	{
		if(a > b)
            a -= b;
        else
            b -= a;
    }
	printf("HCF=%d",a);
	return 0;
}
