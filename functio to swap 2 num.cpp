/*1.	Write a program in C to swap two numbers using function.*/
#include<stdio.h>
int swap_number(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
	return(a,b);
	
}
main()
{
	int num_1,num_2,swap;
 printf("enter 2 numbers :");
 scanf("%d%d",&num_1,&num_2);
 printf("%d & %d ",num_1,num_2);
  swap_number(num_1,num_2);
  	printf("after swap =%d & %d",num_1,num_2); 
}
