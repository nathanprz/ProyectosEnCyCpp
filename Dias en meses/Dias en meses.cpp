#include <stdio.h>
int main()
{
	int mes;
	printf("Mes: ");
	scanf_s("%i", &mes);

	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		printf("True");
	}

	else
	{
		printf("False");
	}

}
