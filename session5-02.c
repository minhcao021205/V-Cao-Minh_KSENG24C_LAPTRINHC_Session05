#include <stdio.h>

int main() {
    int predefined_number = 42; 
    int user_input;

    printf("H�y do�n ss nguy�n d� cho truoc!\n");

    do {
        printf("Nhap mot so: ");
        scanf("%d", &user_input);

        if (user_input != predefined_number) {
            printf("Sai roi, thu lai!\n");
        }
    } while (user_input != predefined_number);

    printf("Ch�nh x�c! So d� cho truoc l� %d.\n", predefined_number);

    return 0;
}
