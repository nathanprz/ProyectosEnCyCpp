#include <stdio.h>
int main()
{
	//Haga un programa que lea una fecha y detecte si el año pertenece a este sigl. Debe imprimir "siglo xxi" si es del siglo y "otro siglo" si no
	int dia, mes, ano;
	printf("Dia: ");
	scanf_s("%i", &dia);
	printf("Mes: ");
	scanf_s("%i", &mes);
	printf("Ano: ");
	scanf_s("%i", &ano);

	if (ano >= 2001 && ano <= 2100)
	{
		printf("Siglo XXI");
	}
	else
	{
		printf("Otro siglo");
	}

}
