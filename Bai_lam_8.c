#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "manchester united";
    printf("Chuoi ban dau: %s\n", str);
    int i;
    int len = strlen(str);
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    for (i = 1; i < len; i++) {
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 32;
        }
    }
    printf("Chuoi sau khi in hoa chu dau cua tu: %s\n", str);
    return 0;
}



