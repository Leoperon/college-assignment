#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,l;
	char str[200],str1[200];
	printf("Enter any string:");
    gets(str);
    printf("Enter any string:");
    gets(str1);
    l=strlen(str1);
	while(str[i] !='\0')
    {
    	str1[l++]=str[i];
    	i++;
	}
    puts(str1);
	return 0;
}
