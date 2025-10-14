#include <stdio.h>

int main(){
	int radius = 0;
	printf("Please enter radius number: \n");
	scanf("%i", &radius);
	
	double area = 3.14159 * (radius * radius);

	printf("The radius is: %i\n", radius);
	printf("The area is: %lf\n", area);
	return 0;
}
