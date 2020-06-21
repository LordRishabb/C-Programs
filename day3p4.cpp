#include<stdio.h>
#include"myhead.h"
int main()
{
	int n;
	float r;
	printf("Enter length of edge of square\n");
	scanf("%d",&n);
	printf("Area of square= %d\n",areofsquare(n));
	printf("Perimeter of square= %d\n",periofsquare(n));
	printf("Enter the radius of circle\n");
	scanf("%f",&r);
	printf("Area of circle= %f\n Circumference of circle= %f",areaofcircle(r),circum(r));
}
