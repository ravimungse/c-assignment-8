//9. Write a program to find the nature of roots of a quadratic equation.
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the coefficients of A B and C = ");
	scanf("%d",&a);
	printf("Enter the coefficients of A B and C = ");
	scanf("%d",&b);
	printf("Enter the coefficients of A B and C = ");
	scanf("%d",&c);
	d=b*b-(4*a*c);
	
	if(d<0)
	printf("two complex roots exist");
	if(d>0)
	printf("two real and distinct roots exist");
	if(d==0)
	printf("one real and repeated root exists");
}
