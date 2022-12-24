#define M_PI 3,14159265358979323846
#include<stdio.h>
#include<locale.h>
#include<math.h>

double ryad(double x, int n);

void main(void) {
	int eps;
	double x;
	setlocale(LC_ALL,"RUS");
	puts("х = ");
	scanf_s("%lf",&x);
	puts("Точность определения =  ");
	scanf_s("%d", &eps);
	printf("arcctg = %f", (M_PI / 2) * ryad (x,eps));

}

double ryad(double x, int eps)
{
	int n = 0;
	double z = 0;
	for (; n < eps && fabs(x) <= 1; n++) {
		z = z + ((pow(-1, n + 1) * pow(x, 2 * n + 1)) / (2 * n + 1));
	}
	return z;
}