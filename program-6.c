#include <stdio.h>
#include "include/enroll.h"
#include "include/clear.h"

const float PI = 3.14;

main() {
	clear();
	enroll();
// Circle
	float circle_rad;
	printf("----------------------------------\n");
	printf("-	  Area of Circle	 -\n");
	printf("----------------------------------\n");
	printf("Enter Radius of circle: ");
	scanf("%f",  &circle_rad);
	float circle_area = circle_rad*circle_rad*PI;
	printf("Area of Circle: %.2f\n\n", circle_area);

// Rectangle
	float length, width;
	printf("----------------------------------\n");
	printf("-	 Area of Rectangle	 -\n");
	printf("----------------------------------\n");
	printf("Enter Length of Rectangle: ");
	scanf("%f",  &length);
	printf("Enter Width of Rectangle: ");
	scanf("%f", &width);
	float rectangle_area = length*width;
	printf("Area of Rectangle: %.2f\n\n", rectangle_area);

// Sphere
	float sphere_rad;
	printf("----------------------------------\n");
	printf("-	  Area of Sphere	 -\n");
	printf("----------------------------------\n");
	printf("Enter Radius of Sphere: ");
	scanf("%f",  &sphere_rad);
	float sphere_area = 4*sphere_rad*sphere_rad*PI;
	printf("Area of Sphere: %.2f\n\n", sphere_area);
}
