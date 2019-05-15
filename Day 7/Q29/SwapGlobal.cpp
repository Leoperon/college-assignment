#include<stdio.h>
int x=20,y=30;
int swap(int ,int);
int main()
{
	swap(x,y);
   //	printf("%d ,%d",x,y);
	return x, y;
}
int swap(int a,int b)
{
	//printf("%d ,%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	//printf("%d ,%d\n",a,b);
	return a, b;
}

