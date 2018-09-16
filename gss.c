#include <math.h>

double gss(double xl, double xu, double (*func)(double))
{
	double R = 0.61803;
	double d = R * (xu - xl);
	double x1 = xl + d;
	double x2 = xu - d;
	double fx1 = func(x1), fx2 = func(x2);

	while (fabs(fx1 - fx2) > 3e-8) {
		fx1 = func(x1);
		fx2 = func(x2);
		if (fx1 < fx2) {
			xl = x2;
			x2 = x1;
			d = R * (xu - xl);
			x1 = xl + d;
		} else if (fx2 < fx1) {
			xu = x1;
			x1 = x2;
			d = R * (xu - xl);
			x2 = xu - d;
		} 
	}
	return (x1 + x2) / 2;
}

