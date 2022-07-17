#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* User input to get name and age of user */
	char UserName[20];
	int age;
	int num1;
	int num2;
	char color[15];
	char PluralName [20];
	char celebrity[20];
	/* to be able for c to read a string after space we can create to char variable e.g*/
	char celebrityF[20];
	char celebrityL[20];
	
	printf("Enter name : ");
	scanf("%s", UserName);
	printf("Enter age : ");
	scanf("%d", &age);
	printf("Your name is %s\n", UserName);
	printf("Your age is %d\n", age);
	
	/* to be able to print 2 names we can use fgets */
/*	printf("Enter names:");
	fgets(UserName, [20], stdin);
	printf("your names are %s", UserName);
	*/
	
/* Mad libs game with user input*/
	
	printf("Enter colour :");
	scanf("%s", color);
	printf("Enter Plural Name :");
	scanf("%s", PluralName);
	printf("Enter first name of celebrity :");
	scanf("%s", celebrity);
	printf("Enter full name of celebrity:");
	/* use double %s to input double strings */
	scanf("%s %s", celebrityF,celebrityL);
	
	printf("Roses are %s\n", color);
	printf("%s are blue\n", PluralName);
	printf("i love %s\n", celebrity);
	printf("My crush name is %s %s", celebrityF, celebrityL);
}