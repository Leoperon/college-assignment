#include <stdio.h>
int main()
{
    for(int i=97; i<=103;i++)
    {
        for(int j=97; j<=i; j++)
        {
            printf("%c",(char)j);
        }
        printf("\n");
    }
    return 0;
}

