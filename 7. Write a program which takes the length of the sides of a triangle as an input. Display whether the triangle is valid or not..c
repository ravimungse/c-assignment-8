//7. Write a program which takes the length of the sides of a triangle as an input. 
// Display whether the triangle is valid or not.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("\n Enter Length of First Side = ");
	scanf("%d",&a);
	printf("\n Enter Length of Second Side = ");
	scanf("%d",&b);
	printf("\n Enter Length of Third Side = ");
	scanf("%d",&c);
	
	//we have to check every two sides sum is greater than remaining one, we will use if else conditions
	if(a+b<c)
	printf("\n\n Triangle is not Valid");
	else if(b+c<a)
	printf("\n\n Triangle is not Valid");
	else if(a+c<b)
	printf("\n\n Trianlge is not Valid");
	else
	printf("\n\n Triangle is valid");
	getch();
}
