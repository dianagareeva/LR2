#include <math.h>

double f(double x)
{
	return x <= -3 ? -pow(x, 2) - 1.1 * x + 9 : log(x + 3) / (pow(x, 2) + 9);
}
