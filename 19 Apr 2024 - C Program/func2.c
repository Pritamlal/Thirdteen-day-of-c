#include<stdio.h>
#include<math.h>
#define PI 3.14
double caldiameter(int r);
double calarea(int r);
double calcircumference(int r);

int main()
{
	int r;
	double diameter,cirumference,area;
	printf("Enter the number::");
	scanf("%d",&r);
	
	diameter=caldiameter(r);
	area=calarea(r);
	cirumference=calcircumference(r);
	
	printf("Diameter :%.2f\n",diameter);
	printf("Area :%.2f\n",area);
	printf("Circumference %.2f\n",cirumference);
}

double caldiameter(int r)
{
	return 2*r;
}
double calarea(int r)
{
	return PI*r*r;
}
double calcircumference(int r)
{
	return 2*PI*r;
}
