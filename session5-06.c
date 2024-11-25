#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    while (1) { 
        printf("Nhap vào so thu nhat: ");
        scanf("%f", &num1);
        printf("Nhap vào so thu hai: ");
        scanf("%f", &num2);
        
        
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tích 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoát\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:
                printf("Tong cua %.2f và %.2f là: %.2f\n\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f và %.2f là: %.2f\n\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tích cua %.2f và %.2f là: %.2f\n\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f và %.2f là: %.2f\n\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Không the chia cho 0!\n\n");
                }
                break;
            case 5:
                printf("Thoát chuong trình.\n");
                return 0;  
            default:
                printf("Lua chon không hop li! Vui lòng chon lai.\n\n");
        }
    }

    return 0;
}
