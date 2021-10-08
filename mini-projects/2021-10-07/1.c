// 10 진수를 받아 2진수에서 1의 갯수를 출력하라

#include <stdio.h>

void Scan(int * num);
void Print(int num);

int main (void) {
    int num;

    Scan(&num);
    Print(num);

    return 0;
}

void Scan(int * num) {
    fputs("10진수 입력 : ", stdout);
    scanf("%d", num);

    return;
}

void Print (int num) {
    int i;

    int countOne = 0;

    for (i = 7; i >=0; i--) {
        if (num >> i & 1) {
            countOne++;
        }
    }

    printf("2진수에서 1의 갯수 : %d 개 \n", countOne);

    return;
    
}