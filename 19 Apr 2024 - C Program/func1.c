#include<stdio.h>
double cube(double num);
int main()
{
	int num;
	double c;
	printf("Enter the number::");
	scanf("%d",&num);
	
	c=cube(num);
	
	printf("The cube is %.2f",c);
}

double cube(double num)
{
	return num*num*num;
}
