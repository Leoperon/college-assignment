#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1,*f2,*f3;
    int number,i;
    clrscr();

    printf("Contents of DATA file\n\n");
    f1 = fopen("DATA","w");  /* create a data file */
for(i=1;i<=30;i++)
    {
        scanf("%d",&number);
        if(number==-1)break;
        putw(number,f1);
    }
    fclose(f1);

    f1 = fopen("DATA","r");
    f2 = fopen("ODD","w");
    f3 = fopen("EVEN","w");

    while((number = getw(f1)) != EOF) /* Read from Data file */

    {
        if(number%2==0)
            putw(number,f3);
        else
            putw(number,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2 = fopen("ODD","r");
    f3 = fopen("EVEN","r");

    printf("\n\nContents of ODD file \n\n");
    while((number = getw(f2)) != EOF)
        printf("%4d",number);

    printf("\n\nContents of EVEN file \n\n");
    while((number = getw(f3)) != EOF)
        printf("%4d",number);

    fclose(f2);
    fclose(f3);
    getch();
}
