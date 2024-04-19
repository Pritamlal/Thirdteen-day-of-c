#include<stdio.h>
#include<math.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	if(isPrime(num))
	{
		printf("This is Prime Number %d\n",num);
	}
	else
	{
		printf("Ayo this is not Prime Number %d\n",num);
	}
	
	if(isArmstrong(num))
	{
		printf("This is Armstrong number %d\n",num);
	}
	else
	{
		printf("This is not Armstrong Number\n");
	}
	
	if(isPerfect(num))
	{
		printf("This is Perfect number \n");
	}
	else
	{
		printf("AYo this is not Perfect \n");
	}
}

int isPrime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	if(num%i==0)
	{
		return 0;
	}
	return 1;
}


int isArmstrong(int num)
{
	int digit,lastdigit,sum=0,originalnum;
	
	originalnum=num;
	
	digit=(int) log10(num)+1;
	
	while(num!=0)
	{
		
		lastdigit=num%10;
		sum+=pow(lastdigit,digit);
		
		num=num/10;
	}
	return (originalnum==sum);
}

int isPerfect(int num)
{
	int i,sum,originalnum;
	originalnum=sum;
	for(i=1;i<=num/2;i++)
	if(num%i==0)
	{
		sum+=i;
	}
	return (originalnum==sum) ;
}

