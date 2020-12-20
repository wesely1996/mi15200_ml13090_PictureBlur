/**
 * Document: Picture Blure
 * Summary:
 *       Takes a picture and uses the average value of the bits around each bit
 *and sets that average to the bit as its new value.
 */
#include "Maxfiles.h" 			// Includes .max files
#include <MaxSLiCInterface.h>	// Simple Live CPU interface

float dataIn[16] = { 1, 3, 2, 6, 4, 1, 8, 3, 7, 4, 1, 8, 3, 7, 8, 9 };
float dataOut[16];

int main()
{
	printf("Running DFE\n");
	MovingAverage(16, dataIn, dataOut);
	
	for(int i = 0; i<4; i++){
	    for(int j = 0; j<4; j++){
	        printf("%d ", dataOut[i*4+j]);
	    }
	    printf("\n");
	}

	return 0;
}

