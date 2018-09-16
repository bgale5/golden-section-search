#ifndef GSS_H
#define GSS_H

/**
 * xl and xu are initial estimates and must bracket exactly one minimum function value. 
 * func is the objective function to be minimised.
 * xopt is assigned the x value which minimises the objective function
 **/
void gss(double *xl,  double xu, double (*func)(double), double *xopt);

#endif

