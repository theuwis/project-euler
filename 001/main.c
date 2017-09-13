#include <stdio.h>
#include <stdlib.h>

int main(void){
	long answer = 0;
	int i; // used for loops
	
	for(i = 1; i < 1000; i++){
		if((i % 3 == 0) || (i % 5 == 0)){
			answer += i;
		}
	}

	printf("answer=%ld\n", answer);
	return EXIT_SUCCESS;
}