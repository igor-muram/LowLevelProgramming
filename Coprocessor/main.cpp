#include <string.h>
#include <stdio.h>

extern "C" int dichotomy(float eps, float& x);

int main()
{
	float x = 0;
	int res = dichotomy(10e-8, x);
	printf_s("Result: %6f", x);
	return 0;
}