#include<stdio.h>
int isPrime(int num);
void printPrime(int lowerlimit,int upperlimit);
int main()
{
	int lowerlimit,upperlimit;
	printf("Enter the numberss::");
	scanf("%d %d",&lowerlimit,&upperlimit);
	
	printPrime(lowerlimit,upperlimit);
	return 0;
}

void printPrime(int lowerlimit,int upperlimit)
{
	printf("The numbers are %d to %d are:",lowerlimit,upperlimit);
	
	while(lowerlimit<=upperlimit)
	{
	if(isPrime(lowerlimit))
	{
		printf("%d,",lowerlimit);
	}
	lowerlimit++;
}
}

int isPrime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
