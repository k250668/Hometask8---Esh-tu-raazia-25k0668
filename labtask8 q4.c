#include <stdio.h>
int main() {
	int i , j;
	int available = 0;
	int seats[3][3] = {
	{1,0,1} , {0,0,1} , {1,1,0}
	};
	
	for (i = 0 ; i<3;i++) {
		printf("Row number: %d ", i+1);
		printf("\n");
		for (j=0 ; j<3;j++) {
			printf("%d ", seats[i][j]);
		}
		 printf("\n");}
	for (i = 0 ; i<3;i++) {
		for (j=0 ; j<3;j++) {
			if( seats[i][j] == 0) {
				available++;
				printf("Available seat at row %d and seat number %d   \n", i+1,j+1);
			}
		}
	}
	printf("Total number of seats available: %d", available);
	return 0;
}
