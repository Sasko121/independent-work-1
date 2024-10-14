#include "stdio.h"
#include "math.h"

//independent work 1
/*
* sin^3.2*(a-x) / b+x^-1.7
* a = 12.7, b = 7.12, x = 2.09
*/
int main()
{

	float a = 12.7f, b = 7.12f, x = -2.09f;

	float y = sin(a-x);
	float y1 = pow(y, 3.2);
	float h = (b + x);
	float h1 = pow(h, -1.7);
	float result = y1 / h1;

	printf("Result: %.2f\n", result);

	return 0;
}