#include<stdio.h>
int isEven(int num)
{
	return !(num&1);
}

int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	if(isEven(num))
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
}
