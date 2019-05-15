#include<stdio.h>//String Pallindrome
#include<string.h>
int main()
{
	int n,i=0,l,c=0;
	char str[200],str1[200];
	printf("Enter any string:\n");
    gets(str);
    l=strlen(str);
    while(l>0)
    {
    	l--;
    	str1[i]=str[l];
    	i++;
	}
	c=strcmp(str,str1);
	if(c==0)
	printf("\nsame");
	else
	printf("\nnot same");
	return 0;
}
