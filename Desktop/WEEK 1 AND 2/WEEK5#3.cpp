#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value for variable A: ");
    scanf("%d", &a);

    printf("Enter value for variable B: ");
    scanf("%d", &b);

 
    printf("\nBefore swap: A = %d, B = %d\n", a, b);

    
    temp = a;
    a = b;
    b = temp;

    printf("After swap:  A = %d, B = %d\n", a, b);

    return 0;
}

