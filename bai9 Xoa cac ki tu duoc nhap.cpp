#include <stdio.h>

int main() {
    char str[100] = "hellooooo world";
    char ch;
    int i, j = 0;

    printf("Chuoi ban dau: %s\n", str);

 
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &ch);

   
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) { 
            str[j++] = str[i]; 
        }
    }

    str[j] = '\0';

    printf("Chuoi sau khi xóa ký tu '%c': %s\n", ch, str);

    return 0;
}
