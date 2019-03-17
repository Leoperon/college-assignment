#include<stdio.h>
int main()
{
	int m;
    printf("ENTER THE MARKS OF THE STUDENT =");
    scanf("%d",&m);
    if(m<=100 || m>=90)
          printf("O GRADE");
    else if(m<=89 ||m >=80)
          printf("E GRADE");
    else if(m<=79 ||m >=70)
          printf("A GRADE");
    else if(m<=69 ||m >=60)
          printf("B GRADE");
    else if(m<=59 ||m >=50)
          printf("C GRADE");
    else if(m<=49 ||m >=40)
          printf("D GRADE");
    else
          printf("F GRADE");
	return 0;
}

