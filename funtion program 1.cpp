#include<stdio.h>
void sum();//function declaration 
int main()
{
	sum();//function calling 
	printf("welcome to  c function\n");
	sum();
}
void sum()//funtion definition 
{
	int x,y,sum=0;
	printf("enter the value of x and y: ");
	scanf("%d%d",&x,&y);
	sum=x+y;
	printf("the sum of x+y is:%d\n",sum);
}
