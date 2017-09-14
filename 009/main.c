#include <stdio.h>
#include <stdlib.h>


int main(void){
	int a, b, c;

	for(a = 1; a < 1000; a++){
		for(b = 1; b < 1000; b++){
			for(c = 1; c < 1000; c++){
				// check for all conditions
				//  1. a < b < c
				//  2. a^2 * b^2 = c^2
				//  3. a + b + c = 1000
				if((a < b) && (b < c) && (a*a + b*b == c*c) && (a + b + c == 1000)){
					printf("answer=%d (a=%d b=%d c=%d)\n", a*b*c, a, b, c);
					break;
				}
			}
		}
	}

	return EXIT_SUCCESS;
}