#include <stdio.h>

int main(){
	
	printf("The number of eggs for the day: ");

	int eggs = 0;
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12;

	printf("You have %.2lf dozen eggs.\n", dozen);

	return 0;
}
