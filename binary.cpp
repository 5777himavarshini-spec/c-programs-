#include<stdio.h>
int main()
{
	int num,temp,rem,sum=0,rev=0;
	printf("Enter any positive integer: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("\n sum of individual digits of % d is: %d",temp,sum);
	
	num = temp;
	while(num>0)
	{
		rem = num % 10;
		rev = rev*10 + rem;
		num = num/10;
	}
	if (temp==rev)
	printf("\n%d is a palindrome",temp);
	else
	printf("\n%d is not a palindrome",temp);

}
