#include <stdio.h>

void ScanInput (int *, int *);
void PrintResult (int);

int main (void) {
    int inputNum;
    int sum = 0;

    ScanInput(&inputNum, &sum);
    PrintResult(sum);

    return 0;
}

void ScanInput(int * num, int *sum) {
    while (*num != 0) {
        fputs("정수 입력 : ", stdout);
        scanf("%d", num);
        *sum += *num;
    }
    return;
}

void PrintResult (int sum) {
    printf("합 : %d \n", sum);

    return;
}