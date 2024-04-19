#include<stdio.h>
#include<math.h>
double cal(double base,int expo);

int main()
{
	int expo;
	double base,power;
	printf("Enter the base::");
	scanf("%lf",&base);
	printf("Enter the expo::");
	scanf("%d",&expo);
	
	power=cal(base,expo);
	
	printf("%.2lf ^ %d = %f", base, expo, power);
	return 0;
}

double cal(double base,int expo)
{
	if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * cal(base, expo - 1);
    else
        return 1 / cal(base, -expo);
}
