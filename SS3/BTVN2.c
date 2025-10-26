#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Nhap nhiet do (do Celsius): ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("Nhiet do theo do Fahrenheit: %.2lf\n", fahrenheit);

    return 0;
}
