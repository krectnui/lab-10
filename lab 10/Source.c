//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
/*void main()
{
	setlocale(LC_ALL, "Rus");

	float y1, y2, x; 
	printf("Введите значение х\n");
	scanf_s("%f", &x);
	if (x <= 3)
	{
		y1 = pow(x, 2) - 3 * x + 9;
		printf("y1 = %.2lf\n", y1);
	}
	else
	{
		y1 = 1 / (pow(x, 3) + 3);
		printf("y2 = %.2lf\n", y1);
	}
	y2 = x * exp(sin(pow(x, 2)));
	printf("y2 = %.2lf\n", y2);
	printf("Произведение = %.2lf\n", (y1 * y2));
	printf("Разность квадратов = %.2lf\n", (pow(y1, 2) - pow(y2, 2)));
	printf("Удвоенная сумма = %.2lf\n", (2 * (y1 + y2)));
}
void main() {
	int x, k, a, s1 = 0; 
	float y;
	setlocale(LC_ALL, "Rus");

	printf("Введите значение х\n");
	scanf_s("%d", &x);
	printf("Введите значени k\n");
	scanf_s("%d", &k);
	a = (2 * k - 1);
	for (int m = 1; m <= a; m++)
	{
		s1 += m;
		printf("%d\n", s1);
	}
	printf("\n\n\n");
	for (int n = 1; n <= k; n++);
	{
		y = pow(-1, k - 1) * (pow(x, 2 * k - 1) / (s1));
		printf("%.2lf\n", y);
	}
}*/