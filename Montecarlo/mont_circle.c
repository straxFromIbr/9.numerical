#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUM 10000000
double rnd(void){
	return((double)rand()/RAND_MAX);
}


int main(void){
	double x, y, pi;
	int i, in=0;

	for(i=0; i<NUM; i++){
		x = rnd();
		y = rnd();
		if (x*x + y*y <= 1) {
			in++;
		}
	}
	pi = (double)4 * in/NUM;
	printf("pi=%f\n", pi);
	printf("error : %f\n", M_PI-pi);
	return 0;
}
