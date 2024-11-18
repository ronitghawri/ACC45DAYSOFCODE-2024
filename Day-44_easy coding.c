#include <stdio.h>

int main() {
    int T, A, B, C, D, E;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        if ((A + B <= D && C <= E) || (A + C <= D && B <= E) || (B + C <= D && A <= E)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}