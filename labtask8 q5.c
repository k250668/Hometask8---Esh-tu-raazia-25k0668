#include <stdio.h>
int main() {
	int i,j;
	int spots[4][4] = {
	{12, 15, 10, 9} , {11, 8, 12, 13} , {14, 13, 9, 7} , {16, 11, 10, 8}
	};
	printf("Grid of Temperatures (C):");
	  printf("\n");
	for ( i =0 ; i<4 ; i++) {
		for (j=0;j<4;j++) {
			printf("%d ", spots[i][j]);
		}
		  printf("\n");
	}
	printf("Cold spot found: ");
	printf("\n");
	for ( i =0 ; i<4 ; i++) {
		for (j=0;j<4;j++) {
			int temp = spots[i][j];
			int coldspot = 1;
			  if (i > 0 && spots[i - 1][j] <= temp)  {
                coldspot = 0; }
            if (i < 3 && spots[i + 1][j] <= temp)  {
           	 coldspot = 0;
		   }
            if (j > 0 && spots[i][j - 1] <= temp)  
                {
                	 coldspot = 0;
				}
            if (j < 3 && spots[i][j + 1] <= temp) 
                {
                	 coldspot = 0;
				}

            if (coldspot)
                printf("At postion(%d,%d) with temperature %d C\n", i + 1, j + 1, temp);
		}}
	
return 0;
 }

