#include<stdio.h>
void printPerfect(int lowerlimit,int upperlimit);
int isPerfect(int num);
int main()
{
	int lowerlimit,upperlimit;
	printf("Enter the Lowerlimit and upperlimit::");
	scanf("%d %d",&lowerlimit,&upperlimit);
	
	
	printPerfect( lowerlimit, upperlimit);
	
	return 0;
}

void printPerfect(int lowerlimit,int upperlimit)
{
	
	
	while(lowerlimit<=upperlimit)
	{
		if(isPerfect(lowerlimit))
		{
			printf("%d,",lowerlimit);
		}
		lowerlimit++;
	}
}

int isPerfect(int num)
{
	int i,sum=0;
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum==num)
	return 1;
	else
	return 0;
}
