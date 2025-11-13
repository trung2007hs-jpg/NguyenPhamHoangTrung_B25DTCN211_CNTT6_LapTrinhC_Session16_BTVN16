#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    printf("Do dai cua chuoi la: %d\n", length);
    return 0;
}

