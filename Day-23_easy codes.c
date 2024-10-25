
  #include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    
    printf("Enter the number of natural numbers to sum: ");
    scanf("%d", &n);
    do {
        sum += i;
        i++;  
    } while (i <= n);

   printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
