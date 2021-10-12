#include <stdio.h>

void ScanInput (int *, int *, int *);

int Max (int, int, int);
int CompareMax (int num1, int num2);

int Min (int, int, int);
int CompareMin (int num1, int num2);

int main (void) {

    int num1;
    int num2;
    int num3;

    ScanInput(&num1, &num2, &num3);
    Max(num1, num2, num3);
    Min(num1, num2, num3);

    return 0;
    
}

void ScanInput (int * num1, int * num2, int * num3) {
    fputs("세 정수 입력 : ", stdout);
    scanf("%d %d %d", num1, num2, num3);
}

int Max (int num1, int num2, int num3) {
    return CompareMax(CompareMax(num1, num2), CompareMax(num2, num3));
}

int CompareMax (int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int Min (int num1, int num2, int num3) {
    return CompareMin(CompareMin(num1, num2), CompareMin(num2, num3));
}
int CompareMin (int num1, int num2) {
    return num1 < num2 ? num1 : num2;
}

