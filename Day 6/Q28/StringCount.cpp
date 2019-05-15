#include<stdio.h>//String COUNT
#include<string.h>
int main()
{
	int n,i=0,l,c=0;
	char str[200];
	printf("Enter any string:\n");
    gets(str);
    l=strlen(str);
    while(str[i]!='\0')
    {
    	if(str[i]==' ')
    	{
    		c++;
		}
    	i++;
	}
	printf("No of words:%d\n",(c+1));
	printf("No of character:%d\n",(l-c));
	return 0;
}
