#include<stdio.h>
#include<math.h>
void printArms(int lowerlimit,int upperlimit);
int isArms(int lowerlimit);
int main()
{
	int lowerlimit,upperlimit;
	printf("Enter the number::");
	scanf("%d %d",&lowerlimit,&upperlimit);
	
	printArms(lowerlimit,upperlimit);
	return 0;
}

void printArms(int lowerlimit,int upperlimit)
{
	printf("Your Armstrong numbers are from %d to %d \n",lowerlimit,upperlimit);
	while(lowerlimit<=upperlimit)
	{
		if(isArms(lowerlimit))
		{
			printf("%d ",lowerlimit);
		}
		lowerlimit++;
	}
	printf("\n");
}

int isArms(int num)
{
	int digit,sum=0,orginum,lastdigit;
	orginum=num;

	
	while(num!=0)
	{
		lastdigit=num%10;
		sum=sum+(lastdigit*lastdigit*lastdigit);
		num=num/10;
	}
	return (orginum==sum);
}
