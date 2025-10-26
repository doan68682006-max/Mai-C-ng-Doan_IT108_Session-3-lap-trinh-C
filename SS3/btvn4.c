#include <stdio.h>

int main() {
    double toan, van, anh;
    double tong, trungbinh;

    printf("Nhap diem Toan: ");
    scanf("%lf", &toan);

    printf("Nhap diem Van: ");
    scanf("%lf", &van);

    printf("Nhap diem Anh: ");
    scanf("%lf", &anh);

    tong = toan + van + anh;
    trungbinh = tong / 3;

    printf("Tong diem = %.2lf\n", tong);
    printf("Diem trung binh = %.2lf\n", trungbinh);

    return 0;
}
