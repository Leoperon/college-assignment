#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter any no.\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		  if(i%j==0)
		    c++;
		}
	    if(c==2)
  	      printf("PRIME NO. =%d\n",i);
  	    else
  	      printf("NOT A PRIME NO. =%d\n",i);
  	    c=0;
  	}
	return 0;
}
