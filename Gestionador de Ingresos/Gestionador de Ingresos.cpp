#include <stdio.h>
int main()
{
	float dinero, ahorro, inversion, pasajes, editores, miniaturas, internet, total, total2;
	printf_s("Cuanto dinero tienes? : ");
	scanf_s("%f", &dinero);
	pasajes = 300;
	editores = 150;
	miniaturas = 30;
	internet = 90;
	total = pasajes + editores + miniaturas + internet;
	dinero = dinero - total;

	inversion = dinero / 4;
	ahorro = dinero / 4;
	total2 = ahorro + inversion;

	printf_s("Pasajes: %.2f\neditores: %.2f\nminiaturas: %.2f\ninternet: %.2f\ngastos: %.2f\ninversion: %.2f\nAhorro: %.2f\nTotal para ti: %.2f", pasajes, editores, miniaturas, internet,total, inversion, ahorro, total2);


}