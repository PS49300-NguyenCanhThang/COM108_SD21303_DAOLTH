#include <stdio.h>


int main() {
    int a, b;
    char ten[50];

    printf("Nhap so a va b: ");
    scanf("%d%d", &a, &b);

    printf("Nhap vao ten toi: ");
    scanf("%s", ten); // ✅ sửa lại từ %c thành %s

    printf("a = %d, b = %d\n", a, b);
    printf("Ten cua ban la: %s\n", ten);

     // Thực hiện phép cộng và trừ
    int tong = a + b;
    int hieu = a - b;

    printf("Tong a + b = %d\n", tong);
    printf("Hieu a - b = %d\n", hieu);



    return 0;
}
