 #include <stdio.h>

int main() {
    int i = 5;
    int a, b;

    a = i--; 
    printf("After post-increment:\n");
    printf("a = %d\n", a); 
    printf("i = %d\n", i); 

   i=5;
    b = --i;  
    printf("After pre-increment:\n");
    printf("b = %d\n", b);
    printf("i = %d\n", i); 
    return 0;
}