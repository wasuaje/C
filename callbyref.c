/* 42_callbyref.c */

#include <stdio.h>
#include <string.h> 
#include <math.h>

void areaperi(int r, float *a, float *p);


int main()
{
     int radius;
     float area, perimeter;
     printf("\nEnter radius of a circle :"); scanf("%d", &radius);

     areaperi(radius, &area, &perimeter);

     printf("\nArea = %f ", area);
     printf("\nPerimeter = %f", perimeter);
     return 0;
}

void areaperi(int r, float *a, float *p)
{
	*a = 3.14 * r * r ;
	*p = 2 * 3.14 * r ;
}

