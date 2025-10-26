#include <stdio.h>

int main() {
    int n, i;
    double A = 0.0;

    do {
        printf("Nhap n (>1): ");
        scanf("%d", &n);
    } while (n <= 1);

    for (i = 1; i <= n; i++) {
        A += 1.0 / (i * (i + 1) * (i + 2) * (i + 3));
    }

    printf("A = %.5lf\n", A);

    return 0;
}
