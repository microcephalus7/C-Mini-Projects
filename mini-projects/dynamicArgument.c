// 어느 자료형이든 여러개의 인자를 printf 할 수 있는 함수를 생성하라

#include <stdio.h>
#include <stdarg.h>

void Print(int, ...);

int main(void) {
    Print(2, 'd', 30, 20);
    Print(2, 's', "hou hou", "hou!!");
    Print(2, 'f', 3.1426, 555.222);

    return 0;
}

void Print(int len, ...) {

    int i;

    va_list vlist;

    va_start(vlist, len + 1);

    char type = va_arg(vlist, char);

    for (i = 0; i < len; i++) {
        switch (type)
        {
        case 'd':
            printf("%d ", va_arg(vlist, int));
            break;
        case 's':
            printf("%s ", va_arg(vlist, char *));
            break;
        case 'f':
            printf("%f ", va_arg(vlist, double));
            break;
        default:
            break;
        }
    }

    fputs("\n", stdout);

    return;
}