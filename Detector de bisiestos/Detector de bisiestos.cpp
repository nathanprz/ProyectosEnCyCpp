#include <stdio.h>
int main()
{
	int ano;
	printf("Ano: ");
	scanf_s("%i", &ano);

	if (ano % 100 != 0 && ano % 4 == 0)
		printf("El ano es bisiesto");
	else
	{
		printf("El ano no es bisiesto");
	}
}