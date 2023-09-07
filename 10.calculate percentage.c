//10.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
//Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 50% : Grade E
//Percentage < 40% : Grade F
#include<stdio.h>
main()
{
	int phy, chem, bio, math, comp, percentage;
	printf("Enter marks");
	printf("\nphy =");
	scanf("%d",&phy);
	printf("chem = ");
	scanf("%d",&chem);
	printf("Bio = ");
	scanf("%d",&bio);
	printf("math = ");
	scanf("%d",&bio);
	printf("comp = ");
	scanf("%d",&comp);
	percentage=(phy+chem+bio+math+comp)/5;
   
   if(percentage>=90)
   printf("Grade A");
   if(percentage>=80)
   printf("Grade B");
   if(percentage>=70)
   printf("Grade C");
   if(percentage>=60)
   printf("Grade D");
   if(percentage>=40)
   printf("Grade E");
   if(percentage<40)
   printf("Grade F");
}
