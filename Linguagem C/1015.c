#include <stdio.h>
#include <math.h>
#ifndef _MATH_H
#define _MATH_H

int main(void){
	double x1, y1, x2, y2, distancia;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);

	distancia = sqrt(pow(x2 - x1) + pow(y2 - y1));
	printf("%.4lf\n", distancia);

	return 0;
}
