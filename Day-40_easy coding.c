#include <stdio.h>

int main() {
    int T, N, X, P;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &N, &X, &P);

        int score = 3 * X - (N - X); 
        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}