#include <stdio.h>
int main()
{
	int x1, y1, x2, y2, x3, y3, mab, mbc, mca;
	printf("x1: ");
	scanf_s("%i", &x1);
	printf("y1: ");
	scanf_s("%i", &y2);
	printf("x2: ");
	scanf_s("%i", &x2);
	printf("y2: ");
	scanf_s("%i", &y2);
	printf("x3: ");
	scanf_s("%i", &x3);
	printf("y3: ");
	scanf_s("%i", &y3);

	mab = (y2 - y1) / (x2 - x1);
	mbc = (y3 - y2) / (x3 - x2);
	mca = (y3 - y1) / (x3 - x1);

	if (mab == mbc && mab == mca)
		printf("Son de la misma recta");
	else
	{
		printf("No son de la misma recta");
	}


}