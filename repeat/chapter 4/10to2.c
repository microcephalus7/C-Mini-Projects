// 10 진수를 입력받고 2진수로 출력하라

#include <stdio.h>

void ScanNum (int * num) {
    fputs("10진수를 입력해주시요 : ", stdout);
    scanf("%d", num);

    return;
}

void PrintNum (int * num ) {
    int i;

    fputs("진수 : ", stdout);

    for (i = 7; i >= 0; i--) {
        printf("%d", (*num >> i) & 1 );
    }

    fputs("\n", stdout);
}

int main (void) {

    int num;

    ScanNum(&num);
    PrintNum(&num);

    return 0;

}