#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Nem chua Rau Ma 36";
    printf("Chuoi da khai bao la: %s\n", str);
    printf("Cac ky tu trong chuoi la: ");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}

