/*2.	Write a program in C to check a given number is even or odd using the function.*/
#include<stdio.h>

int chk_even(int a)
{
	if (a%2==0)
	{
		return 1;
	}
	else
	return 0;
}
main()
{
	int number,check;
	printf("enter a number");
	scanf("%d",&number);
	check=chk_even(number);
	if(check==0)
	{printf("odd");
	}
	else
	printf("even");
	
}