#include <stdio.h>

int main() {
    int predefined_number = 42; 
    int user_input;

    printf("Hãy doán ss nguyên dã cho truoc!\n");

    do {
        printf("Nhap mot so: ");
        scanf("%d", &user_input);

        if (user_input != predefined_number) {
            printf("Sai roi, thu lai!\n");
        }
    } while (user_input != predefined_number);

    printf("Chính xác! So dã cho truoc là %d.\n", predefined_number);

    return 0;
}
