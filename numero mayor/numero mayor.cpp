#include<stdio.h>
int main()
{
	float num1, num2, num3;

	printf("num1: ");
	scanf_s("%f", &num1);
	printf("num2: ");
	scanf_s("%f", &num2);
	printf("num3: ");
	scanf_s("%f", &num3);

	if (num1 > num2 && num1 > num3)
		printf("%.2f",num1);
	if (num2 > num1 && num2 > num3)
		printf("%.2f", num2);
	else
	{
		printf("%.2f", num3);
	}

}
