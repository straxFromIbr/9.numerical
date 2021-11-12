#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUM 10000000

double rnd(double n){
	return ( (double)rand()/RAND_MAX*n);
}


int main(void){
	double x, y, pi;
	int i, in=0;

	for(i=0; i<NUM; i++){
		x = rnd(2);
		y = rnd(1);
		if (x*x/4 + y*y <= 1) {
			in++;
		}
	}
	printf("S = %f\n", 8.0 * in /NUM);
	return 0;
}
