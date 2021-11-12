#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 10000000
#define f(x) ((x)*(x) + (x) + 1)

double rnd(double n){
	return ( (double)rand()/RAND_MAX*n);
}


int main(void){
	double x, y, pi;
	int i, in=0;

	for(i=0; i<NUM; i++){
		x = rnd(1);
		y = rnd(3);
		if (y <= f(x) ) {
			in++;
		}
	}
	printf("S = %f\n", 3.0 * in /NUM);
	return 0;
}
