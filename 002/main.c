#include <stdio.h>
#include <stdlib.h>

int main(void){
	long answer = 0;
	int prev_nr = 1, curr_nr = 1, next_nr = 1;
	
	while(next_nr < 4000000){	// numbers < 4e6
		prev_nr = curr_nr;
		curr_nr = next_nr;
		next_nr = prev_nr + curr_nr;

		printf("prev=%d curr=%d next=%d\n", prev_nr, curr_nr, next_nr);

		// only take even numbers
		if(curr_nr % 2 == 0) answer += curr_nr;
	}

	printf("\nanswer=%ld\n", answer);
	return EXIT_SUCCESS;
}