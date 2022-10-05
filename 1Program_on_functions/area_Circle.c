		// Write a function to calculate area of a circle.(Takes Something, Returns Something)
float area_circle(float r)
{
	return (3.14 * r * r);
}

#include<stdio.h>
int main()
{
	float b;
	printf("Enter radious of circle ");
	scanf("%f", &b);
	printf("Area of this circle is = %f \n", area_circle(b));
	return 0;
}
