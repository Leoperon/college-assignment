#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
   char nm[20],team[20];
   int avg;
};
#define total 10
int main()
{
   struct cricket player[total],temp;
   int i,j;
   for(i=0;i<total;i++)
   {
          printf("For player %d\n",i+1);
          printf("Enter the name of player : ");
          fflush(stdin);
          gets(player[i].nm);
          printf("Enter the team : ");
          fflush(stdin);
          gets(player[i].team);
          printf("Enter the batting average : ");
          fflush(stdin);
          scanf("%d",&player[i].avg);
    }
    printf("\nTeam Name Average\n");
    printf(" \n");
    for(i=0;i<total;i++)
    {
         printf("%-10s %-10s %7d\n",player[i].team,player[i].nm,player[i].avg);
    }
   getch();
   return 0;
}
