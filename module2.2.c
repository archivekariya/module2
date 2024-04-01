#include<stdio.h>

int main()
{
	float p,r,t,si,ci;
	
	printf("enter your p:\n");
	scanf("%f",&p);
	printf("enter your r:\n");
	scanf("%f",&r);
	printf("enter your t:\n");
	scanf("%f",&t);
	
	si=p*r*t/100;
	ci=p*(1+r/100)-p;
	
	printf("simple intrest is:%.0f\n",si);
	printf("compound intrest is:%.0f",ci);
	
}
