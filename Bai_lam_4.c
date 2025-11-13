#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Co tin hieu var anh em len phim 36";
    char ch;
    int count = 0;
    printf("Chuoi hien tai: %s\n", str);
    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}

