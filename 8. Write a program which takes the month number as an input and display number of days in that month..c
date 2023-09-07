//8. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("\n Enter Month Number = ");
	scanf("%d",&a);
	
	//we will use % operator but first we have to cover February and august months 
	//because february have only 28 days and august and juky have 31 days
	if(a==2)
	printf("\n Number of Days in this month are = 28");
	else if(a==8)
	printf("\n Number of Days in this month are = 31");
	else if(a%2==0)
	printf("\n Number of Days in this month are = 30");
	else
	printf("\n Number of Days in this month are = 31");
}
