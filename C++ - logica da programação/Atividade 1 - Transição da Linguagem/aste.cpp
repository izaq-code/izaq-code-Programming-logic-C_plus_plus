#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    for(j = 1; j <= 8; j++){
        for(i = 1; i <= j; i++)
            printf("*");
        printf("\n");
    }
}
