#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time, amount;
    int n; 

    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

   
    rate = rate / 100;

    
    amount = principal * pow((1 + rate / n), n * time);

    
    printf("Final amount after %.2lf years: %.2lf\n", time, amount);
    printf("Compound interest earned: %.2lf\n", amount - principal);

    return 0;
}


