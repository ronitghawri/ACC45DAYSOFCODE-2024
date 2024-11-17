#include <stdio.h>

int main() {
    int T, X, Y, R;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &X, &Y, &R);

        int extra_sticks = R / 30;

        int max_plates = (X + extra_sticks + Y - 1) / Y;

        printf("%d\n", max_plates);
    }

    return 0;
}