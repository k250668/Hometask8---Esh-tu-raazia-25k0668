#include <stdio.h>
int main() {
	int space;
	int i , j;
int n = 5; 
    for( i = 1; i <= n; i++) {
        for(space = 5; space > i; space--) {
            printf("  ");
        }
        for ( j =1 ; j<= i; j++){
            	printf("* ");
		
        }
           printf("\t|\t");
    

        for(space = 5; space > i; space--) {
            printf("  ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
          printf("\t|\t");

   

        for(space = 5; space > i; space--) {
            printf("  ");
        }
        for(j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
           printf("\t|\t");
           printf("\n");

    }
        return 0;
    }
