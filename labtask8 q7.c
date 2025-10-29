#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;
    int odd;

  
    for(i = 0; i < n; i++) {
        odd = 2 * i - 1;
        for(space = n; space > i; space--)
            printf(" ");
        for(j = 0; j < odd; j++)
            printf("*");
        printf("\n");
    }

    printf("\n"); 

  
    for(i = 0; i < n; i++) {
        odd = 2 * i - 1;
        for(space = n; space > i; space--)
            printf(" ");
        for(j = 0; j < odd; j++)
            printf("%d", j);
        printf("\n");
    }

    printf("\n");
    for(i = 0; i < n; i++) {
        odd = 2 * i - 1;
        for(space = n; space > i; space--)
            printf(" ");
        for(j = 0; j < odd; j++)
            printf("%c", 'A' + j );
        printf("\n");
    }

    return 0;
}

