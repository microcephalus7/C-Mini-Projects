#include <stdio.h>

void PrintResult (char * str, int len);

int main (void) {
    char str[] = "Good time";
    int len = sizeof(str) / sizeof(char);

    PrintResult(str, len);

    return 0;
}

void PrintResult (char * str, int len) {
    int i;

    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }

    fputs("\n", stdout);

    return;
}
