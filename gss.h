#ifndef GSS_H
#define GSS_H

/**
 * xl and xu are initial estimates and must bracket exactly one minimum function value. 
 * func is the objective function to be minimised.
 * Returns the x value which minimises the objective function
 **/
void gss(double xl,  double xu, double (*func)(double));

#endif

