#include <stdio.h>

int main() {
    int T, N, A, B, even_count, odd_count, total_duration;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &N, &A, &B);

        even_count = N / 2;
        odd_count = N - even_count;

        total_duration = (even_count * A) + (odd_count * B);

        printf("%d\n", total_duration);
    }

    return 0;
}