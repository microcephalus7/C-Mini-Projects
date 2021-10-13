// 1부터 100까지 8의 배수일 때, 10의 배수일 때 출력, 단 8의 배수이자 10의 배수일 때 동시 출력 금지

#include <stdio.h>

int main (void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 8 == 0 || i % 10 == 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}