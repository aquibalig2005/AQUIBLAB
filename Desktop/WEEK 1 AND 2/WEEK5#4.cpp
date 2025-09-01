#include <stdio.h>

void sortSides(float *a, float *b, float *c) {
    float temp;
    if (*a < *b) { temp = *a; *a = *b; *b = temp; }
    if (*a < *c) { temp = *a; *a = *c; *c = temp; }
    if (*b < *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    sortSides(&a, &b, &c);

    if (a >= b + c) {
        printf("No triangle is formed.\n");
    } else {
        float a2 = a * a;
        float sum_bc2 = b * b + c * c;

        if (a2 == sum_bc2) {
            printf("Right-angled triangle.\n");
        } else if (a2 > sum_bc2) {
            printf("Obtuse-angled triangle.\n");
        } else {
            printf("Acute-angled triangle.\n");
        }
    }

    return 0;
}

