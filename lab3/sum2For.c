#include <math.h> 
#include <stdio.h>
#include "func.h
//������� 2 (For)
double summ2(double eps) 
{ 
	double a = 0;
	for (int i = 0; fabs(a) <= eps; i++)
	{
		a = a+func(i); 
	} 
	return a; 
}