
#include "stdio.h"
#include "block_fir.h"

const int SIZE = 256;

int main() {
	int taps[] = {1,2,0,-3,0,4,-5,0,1,-2,0,-3,0,4,-5,0};
	int delay_line[NUM_TAPS];
	int input[256], output[256];
	int i,j;
	for(j = 0; j < SIZE; j++) {
		input[j] = j;
	}
	block_fir(input, output, taps, delay_line);
	for(i = 0; i < SIZE; i++) {
		printf("result = %d\n", output[i]);

	}
	if(output[i-1] == -1452) {
	  return 0;
	}
	else {
	  return 1;
	}



}

