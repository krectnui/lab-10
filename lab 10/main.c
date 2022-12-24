/*#include<stdio.h>
#include<locale.h>
#include<math.h>
#define _USE_MATH_DEFINES
int main() {
	setlocale(LC_ALL,"RUS");
	int x, k, b, c = 0;
	float y;
	printf("x = ");
	scanf_s("%d", &x);
	printf("k = ");
	scanf_s("%d", &k);
	b = (2 * k - 1);
	for (int p = 1; p <= b; p++) {
		c += p;
		printf("%d\n", c);
	}
	for (int n = 1; n < b; n++) {
		y = pow(-1, (k - 1)) * (pow(x, 2 * k - 1) / (c));
		printf("%.2lf\n", y);
	}
}*/