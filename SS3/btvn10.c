#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double S;

    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);

    S = sqrt(a+sqrt(b+1))+sqrt(b+sqrt(a*a+b*b));

    printf("S = %.2lf\n", S);

    return 0;
}
