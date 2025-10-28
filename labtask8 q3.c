#include <stdio.h> 
int main() {
	int i , j ; 
	int countwhite = 0;
	int image[4][4] = {
	{1, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 1, 0, 0},
    {0, 0, 1, 1}
	};
	int inverted[4][4];
	for ( i=0 ; i<4;i++) {
		for (j=0;j<4;j++) {
			if (image[i][j] == 1) {
				countwhite++;
			}
			inverted[i][j] = 1-image[i][j];
		}
	}
	
	 printf("Original Image\t\tInverted Image\n");
	 for (i = 0 ; i<4;i++) {
	
	 for (j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\t\t");
        for (j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("Number of white pixels in original image: %d", countwhite);
    return 0;
}
