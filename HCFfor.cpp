#include<stdio.h>
int  main()
{
	int a,b,h,i;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a && i<=b;i++)
	{
		if(a > b)
            a -= b;
        else
            b -= a;
    }
	printf("HCF=%d",a);
	return 0;
}
