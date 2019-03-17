#include<stdio.h>
int main()
{
	int s=0,r,n;
	printf("Emter any 5 digit number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("SUM OF 5 DIGIT NO.=%d",s);
	return 0;
}
