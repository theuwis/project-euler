#include <stdio.h>
#include <stdlib.h>


int main(void){
	long sum_sq = 0, sq_sum = 0;
	int i;

	for(i = 1; i <= 100; i++){
		sum_sq = (i*i) + sum_sq;
		sq_sum += i;
	}

	sq_sum = sq_sum * sq_sum;
	printf("answer=%ld\n", sq_sum - sum_sq);
	return EXIT_SUCCESS;
}