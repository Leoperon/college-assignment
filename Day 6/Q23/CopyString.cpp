#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char str[200],str1[200];
	printf("Enter any string:");
    gets(str);
	while(str[i]!='\0')
    {
    	str1[i]=str[i];
        i++;
	}
    puts(str1);
	return 0;
}
