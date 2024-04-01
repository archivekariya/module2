#include<stdio.h>
int main()
{ 
    float n;
	int opt;
	printf("enter your number:\n");
	scanf("%f",&n);
	
	printf("enter your choice:\n");
	printf("1.square\n2.cube\n3.both\n4.exit\n");
	scanf("%d",&opt);
	
	switch(opt)
    {
    	case 1:
    		printf("square of %.0f is:%.0f",n,n*n);
    		break;
    	case 2:
    		printf("cube of %.0f is:%.0f",n,n*n*n);
    		break;
    	case 3:
    		printf("square of %.0f is:%.0f\n",n,n*n);
    		printf("cube of %.0f is:%.0f",n,n*n*n);
    		break;
    	case 4:
    		break;
    	default:
    		printf("enter your correct opt");
    		break;
	    
    }
	
}
