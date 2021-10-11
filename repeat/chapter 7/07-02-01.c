#include <stdio.h>

void ScanInput (int *);
void PrintResult (int);

int main (void) {
    int sum = 0;

    ScanInput(&sum);
    PrintResult(sum);

    return 0;
}

void ScanInput (int * sum) {
    int i = 0;

    int input;

    while (i < 5)
    {
        while (input < 1) {
            fputs("0보다 큰 정수 입력 : ", stdout);
            scanf("%d", &input);
        }
        *sum += input;

        input = 0;
        i++;
    }
    
}
void PrintResult (int sum) {
    printf("합 : %d \n", sum);

    return;
}
