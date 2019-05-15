#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char str[200],str1[200];
	printf("Enter any string:");
    gets(str);
    printf("Enter any string:");
    gets(str1);
	while(str[i] !=' ')
    {
    	if(str[i]!=str1[i])
    	{
		   c++;
	    }
	    i++;
	}
	if(c!=0)
      printf("Not same");
    else
      printf("Same");
	return 0;
}
