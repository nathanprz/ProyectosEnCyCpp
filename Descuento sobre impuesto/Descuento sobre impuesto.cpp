#include <stdio.h>
int main()
{
	float  impuesto, apagar, descuento, descuento1;
	int edad, mes;
	printf("Monto de impuesto: ");
	scanf_s("%f", &impuesto);
	printf("Edad: ");
	scanf_s("%i", &edad);
	printf("Mes: ");
	scanf_s("%i", &mes);

	if (edad >= 60)
	{
		if (mes == 1)
		{
			descuento1 = .45;
		}
		else if (mes == 2)
		{
			descuento1 = .35;
		}
		else
		{
			descuento1 = .25;

		}

	}
	else
	{
		if (mes == 1)
		{
			descuento1 = .20;
		}
		else if (mes == 2)
		{
			descuento1 = .10;
		}
		else
		{
			descuento1 = .25;
		}
		
		
	}
	descuento = descuento1 * impuesto;
	apagar = impuesto - descuento;
	printf("El monto es: %.2f\nDescuento: %.0f%%\nEl descuento es del: %.2f%\nCantidad total la pagar: %.2f", impuesto, descuento1*100, descuento, apagar);
	return 0;
}