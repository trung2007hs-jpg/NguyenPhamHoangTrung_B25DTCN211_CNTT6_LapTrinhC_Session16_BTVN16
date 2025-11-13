#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello my gmail is name1999sp@gmail.com!";
    int letters = 0;
    int digits = 0;
    int special = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", special);
    return 0;
}

