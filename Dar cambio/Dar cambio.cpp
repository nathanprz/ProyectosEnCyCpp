#include <stdio.h>
int main()
{
	int billetescien, billetecincuenta,billetesveinte, billetesdiez, billetescinco, billetesuno;
	float cambio, venta, pago, falta;
	printf("Compra: ");
	scanf_s("%f", &venta);
	printf("Pago: ");
	scanf_s("%f", &pago);

	cambio = pago - venta;
	if (pago < venta)
	{
		falta = venta - pago;
		printf("Te faltan %.f pesos", falta);
	}
	else
	{
		if (cambio >= 100)
		{
			billetescien = cambio / 100;
			printf("%i biletes de cien\n", billetescien);
			cambio = billetescien * 100 - cambio;
		}
		if (cambio >= 50)
		{
			billetecincuenta = cambio / 50;
			printf("%i biletes de cincuenta\n", billetecincuenta);
			cambio = billetecincuenta * 50 - cambio;
		}
		if (cambio >= 20)
		{
			billetesveinte = cambio / 20;
			printf("%i biletes de veinte\n", billetesveinte);
			cambio = billetesveinte * 20 - cambio;
		}
		if (cambio >= 10)
		{
			billetesdiez = cambio / 10;
			printf("%i monedas de diez\n", billetesdiez);
			cambio = billetesdiez * 10 - cambio;
		}
		if (cambio >= 5)
		{
			billetescinco = cambio / 5;
			printf("%i monedas de cinco\n", billetescinco);
			cambio = billetescinco * 5 - cambio;
		}
		if (cambio >= 1)
		{
			billetesuno = cambio;
			printf("%i monedas de uno\n", billetesuno);
		}
	}
	
}