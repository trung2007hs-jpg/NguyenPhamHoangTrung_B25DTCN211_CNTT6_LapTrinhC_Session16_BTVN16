#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hoang Tien Hieu hom thu sau tron hoc.";
    int count = 0;
    int inWord = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && inWord == 0) {
            inWord = 1;
            count++;
        } else if (str[i] == ' ') {
            inWord = 0;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So tu trong chuoi la: %d\n", count);
    return 0;
}

