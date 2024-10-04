#include <stdio.h>
int main()
{
	float cal1, cal2;
	printf("calificacion1: ");
	scanf_s("%f", &cal1);
	printf("calificacion2: ");
	scanf_s("%f", &cal2);

	if (cal1 <= 5 || cal2 <= 5)
		printf("Tienes que recursar papito");
	else
		printf("Aprobaste");
}
