#include <stdio.h>

int main() {
    int i,j ;  // Number of rows in the pattern

    for ( i = 1; i <= 5; i++) {
        for ( j = 5; j >= 5 - i + 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

