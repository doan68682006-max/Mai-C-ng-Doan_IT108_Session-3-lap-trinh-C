#include <stdio.h>

int main() {
    double day, cao, S;

    printf("Nhap do dai canh day: ");
    scanf("%lf", &day);

    printf("Nhap chieu cao: ");
    scanf("%lf", &cao);

    S = 0.5 * day * cao;

    printf("Dien tich tam giac = %.2lf\n", S);

    return 0;
}
