#include<stdio.h>
int printnumbers(int start,int end);
int main()
{
	int start,end,sum;
	printf("Enter the start::");
	scanf("%d",&start);
	printf("Enter the end::");
	scanf("%d",&end);
	
	sum = printnumbers(start,end);
	printf("Sum is %d",sum);
	
	return 0;
}

int printnumbers(int start,int end)
{
	int i,sum=0;
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	return sum;
}
