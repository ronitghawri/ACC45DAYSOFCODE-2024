#include <stdio.h>

int main() {
    int T, N, i, max_degree;
    int coefficients[1000]; // Assuming N <= 1000

    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        scanf("%d", &N);

        for (i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }

        max_degree = -1;
        for (i = 0; i < N; i++) {
            if (coefficients[i] != 0 && i > max_degree) {
                max_degree = i;
            }
        }

        printf("%d\n", max_degree);
    }

    return 0;
}