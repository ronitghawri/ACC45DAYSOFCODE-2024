#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 

        int pointsA_B = (500 - (X * 2)) + (1000 - ((X + Y) * 4));
        int pointsB_A = (1000 - (Y * 4)) + (500 - ((X + Y) * 2));
        
     int maxPoints = (pointsA_B > pointsB_A) ? pointsA_B : pointsB_A;
 
         printf("%d\n", maxPoints);
    }

    return 0;
}