#include <stdio.h>

void ScanInput (int *len, double * sum);
void PrintResult (int len, double sum);

int main (void) {
    int len;
    double sum;

    ScanInput(&len, &sum);
    PrintResult(len, sum);

    return 0;
}

void ScanInput (int *len, double * sum) {
    double num;

    int i = 0;

    fputs("몇 개 입력 ? : ", stdout);
    scanf("%d", len);

    while (i < *len) {
        fputs("정수 입력 : ", stdout);
        scanf("%lf", &num);

        *sum += num;
        i ++;
    }

    return;
}
void PrintResult (int len, double sum) {
    printf("평균 : %lf", sum / len );

    return;
}