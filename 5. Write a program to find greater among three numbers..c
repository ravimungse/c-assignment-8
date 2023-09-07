//5. Write a program to find greater among three numbers. If two or three numbers are
//identical and greatest among all then print it only once.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter Num 1 = ");
	scanf("%d",&a);
	printf("Enter Num 2 = ");
	scanf("%d",&b);
	printf("Enter Num 3 = ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		printf("Num1 is Greater = %d",a);
		else
		printf("Num3 is Greater = %d",c);
	}
	else if(b>c)
	{
		printf("Num 2 is Greater = %d",b);
	}
	else
	printf("Num 3 is Greater = %d",c);
	getch();
	//second condition if numbers are identical
	if(a==b&&b==c)
	{
		printf("\n All Three Numbers Are Identical and Greatest : %d",a);
	}
	else if(a==b||a>c)
	{
		printf("\n Num 1 and Num2 are Identical and Greatest : %d",a);
	}
	else if(b==c||c>a)
	{
		printf("\n Num 2 and Num 3 are Identical and Greatest : %d",b);
	}
	else if(a==c||a>b)
	{
		printf("\n Num 1 and Num 3 are identical and Greatest : %d",a);
	}

}
