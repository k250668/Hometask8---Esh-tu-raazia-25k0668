#include <stdio.h>
int main() {
	int arr[3][4] = {
	{85,92,78,90},{88,76,95,84},{90,85,88,92}
	};
	int i;
	int j;
	int average = 0;
	int sum = 0;
	for (i = 0;i<3;i++) {
		printf("Marks for class %d are: ", i+1);
		for(j=0;j<4;j++) {
			printf("%d ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("\n");
		average = sum/4;
		printf("Average for class %d is : %d", i+1,average);
		printf("\n");
	}
	
	
	return 0;
}
