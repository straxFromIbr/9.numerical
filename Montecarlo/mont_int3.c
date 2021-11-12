#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 10000000
#define f(x) (4 / (1 + (x) * (x)))

double rnd(double n){
	return ( (double)rand()/RAND_MAX*n);
}


int main(void){
	double x, y, pi;
	int i, in=0;
	double x_range = 1.0;
	double y_range = 4.0;
	for(i=0; i<NUM; i++){
		x = rnd(x_range);
		y = rnd(y_range);
		if (y <= f(x) ) {
			in++;
		}
	}
	printf("S = %f\n", x_range * y_range * in /NUM);
	return 0;
}
