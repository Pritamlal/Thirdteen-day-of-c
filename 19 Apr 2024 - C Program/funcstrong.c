#include<stdio.h>
void printStrongNum(int lowerlimit,int upperlimit);
int isStrong(int num);
int fact(int lastdigit);
int main()
{
	int lowerlimit,upperlimit;
	printf("Enter the number::");
	scanf("%d %d",&lowerlimit,&upperlimit);

	
	printStrongNum(lowerlimit,upperlimit);
	
	return 0;
}

void printStrongNum(int lowerlimit,int upperlimit)
{
	while(lowerlimit<=upperlimit)
	{
		if(isStrong(lowerlimit))
		{
			printf("%d,",lowerlimit);
		}
		lowerlimit++;
	}
}

int isStrong(int num)
{
	int sum=0,orignum,lastdigit;
	orignum=num;
	while(num!=0)
	{
		lastdigit=num%10;
		sum=sum+fact(lastdigit);
		num=num/10;
	}
	return (orignum==sum);
}

int fact(int lastdigit)
{
	int factorial=1;
	while(lastdigit!=0)
	{
		 factorial *= lastdigit;
        lastdigit--;
	}
	return factorial;
}
