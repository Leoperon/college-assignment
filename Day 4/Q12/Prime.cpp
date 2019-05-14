#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter any no.\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		    c++;
	}
	if(c==2)
  	  printf("PRIME NO. =%d",n);
  	else
  	  printf("NOT A PRIME NO. =%d",n);
	return 0;
}
