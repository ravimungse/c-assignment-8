//6. Write a program to check whether a given character is an alphabet (uppercase).
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
main()
{
	char a;
	printf("Enter The Character = ");
	scanf("%c",&a);
	if(a>='a'&&a<='z')
	printf("Given Character is alphabet (lower case)");
	else if(a>='A'&&a<='Z')
	printf("Given Character is alphabet (UPPER CASE)");
	else if(a>='1'&&a<='9')
	printf("Given Character is Digit");
	else
	printf("Given character is special Character");
}
