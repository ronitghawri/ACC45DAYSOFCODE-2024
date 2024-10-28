#include <stdio.h>

int main() {
    int T, N, K, i, count;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &K);

        count = 0;
        for (i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            if ((x + K) % 7 == 0) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}