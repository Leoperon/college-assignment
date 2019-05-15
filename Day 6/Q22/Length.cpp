#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char str[200];
	printf("Enter any string:");
    gets(str);
	while(str[i]!='\0')
    {
    	c++;
        i++;
	}
     printf("%d",c);
	return 0;
}
