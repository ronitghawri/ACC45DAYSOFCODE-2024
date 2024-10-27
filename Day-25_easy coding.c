#include <stdio.h>

int main() {
    int T, a, b, c, d, max_tastiness;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        max_tastiness = a + c > a + d ? a + c : a + d;
        max_tastiness = max_tastiness > b + c ? max_tastiness : b + c;
        max_tastiness = max_tastiness > b + d ? max_tastiness : b + d;

        printf("%d\n", max_tastiness);
    }

    return 0;
}

