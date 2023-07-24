/*3.	Write a program in C to check whether a number is a prime number or not using the function*/
#include<stdio.h>
int chk_prime(int a)
{
	int count =0;
	for(int i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			count++;
			
			break;
		}
	}
		if(count ==1)
		{
			return 1;
		}
		else 
		{
	
		return 0;
		 	}  
}
main()
{
 int num,chk;
 printf("enter a number :");
 scanf("%d",&num);
 chk=chk_prime(num);

 if (chk==0)
 {
 	printf("%d is prime ",num);
	 }
	 else
	 printf("%d is composite",num);	
	
}