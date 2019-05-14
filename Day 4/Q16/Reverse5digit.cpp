#include<stdio.h>
int main()
{
	int s=0,r,n,rev=0;
	printf("Emter any 5 digit number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("REVERSE OF 5 DIGIT NO.=%d",rev);
	return 0;
}
