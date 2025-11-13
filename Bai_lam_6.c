#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[] = "Hen gap 12 gio o cay xang 36 OK";
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", count);
    return 0;
}

