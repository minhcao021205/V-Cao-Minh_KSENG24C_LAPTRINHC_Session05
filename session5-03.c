#include <stdio.h>

int main() {
    int number, sum = 0;

    
    do {
        printf("Nhap mot so nguyên duong: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("So phai lon hon 0. Vui lòng nhap lai.\n");
        }
    } while (number <= 0);

    
    int i;
    for (i = 1; i <= number; i++) {
        sum += i;
    }

    
    printf("Tong các so tu 1 den %d là: %d\n", number, sum);

    return 0;
}
