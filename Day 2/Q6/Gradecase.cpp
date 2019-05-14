#include<stdio.h>
int main()
{
	int n;
	printf("Enter the marks\n");
	scanf("%d",&n);
	switch(n)
	{
	    case 90 ... 100:
			printf("O");
			break;
	    case 80 ... 89:
	    	printf("A");
	    	break;
	    case 70 ... 79:
	    	printf("B");
	    	break;
		case 60 ... 69:
	    	printf("C");
	    	break;
		case 50 ... 59:
	    	printf("D");
	    	break;
		case 40 ... 49:
	    	printf("E");
	    	break;
		case 0 ... 39:
	    	printf("F");
	    	break;	
        default:
    	    printf("INVALID INPUT");
    	    break;
    }
	return 0;
}
