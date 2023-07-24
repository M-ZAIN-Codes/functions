/*4.	Ask user to enter a number and print its factorial using functions. */
#include<stdio.h>
int find_fact(int a)
{
     int multi=1;
	for(int i=a;i>=1;i--)
	{
		
		multi=multi*i;
	}
	return multi;
}
main()
{
	int num,factorial;
printf("enter a number :");
scanf("%d",&num);
factorial=find_fact(num);
printf("%d",factorial);	
}  