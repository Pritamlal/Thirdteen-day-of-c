#include<stdio.h>
int max(int num1,int num2);
int min(int num1,int num2);

int main()
{
	int num1,num2,maxi,mini;
	printf("Enter the numbers::");
	scanf("%d %d",&num1,&num2);
	
	maxi=max(num1,num2);
	mini=min(num1,num2);
	printf("The maximum is %d\n",maxi);
	printf("The minimum is %d",mini);
}

int max(int num1,int num2)
{
	return (num1>num2)?num1:num2;
}

int min(int num1,int num2)
{
	return (num1>num2)?num2:num1;
}
