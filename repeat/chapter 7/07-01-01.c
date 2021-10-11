#include <stdio.h>

void ScanInput (int *);
void PrintResult (int);

int main (void) {
    int inputNum;

    ScanInput(&inputNum);
    PrintResult(inputNum);

    return 0;
}

void ScanInput(int * num) {
    fputs("양의 정수 입력 : ", stdout);
    scanf("%d", num);

    return;
}

void PrintResult (int num) {
    int i = 0;

    while (i < num) {
        fputs("Hello World \n", stdout);
        i++;
    }

    return;
}