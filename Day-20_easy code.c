#include <stdio.h>

int main() {
    int T, R1, R2, R3, R4, i;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);

        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }

    return 0;
}