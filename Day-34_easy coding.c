#include <stdio.h>

int main() {
    int T, A, B, C;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &A, &B);

        C = 21 - (A + B);

        if (C >= 1 && C <= 10) {
            printf("%d\n", C);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}