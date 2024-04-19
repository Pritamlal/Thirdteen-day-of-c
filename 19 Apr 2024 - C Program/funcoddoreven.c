#include<stdio.h>
int printodd(int start,int end);
int printeven(int start,int end);
int main()
{
	int start,end,oddnums,evenums;
	printf("Enter the start and end::");
	scanf("%d",&start);
	printf("Enter the start and end::");
	scanf("%d",&end);
	oddnums=printodd(start,end);
	evenums=printeven(start,end);
	
 printf("Even/odd Numbers from %d to %d are: ", start,end);
    printodd(start,end); 
    printeven(start,end); 
}

int printodd(int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
			printf("%d,",i);
		}
	}
	return i;
}

int printeven(int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf("%d,",i);
		}
	}
	return i;
}
