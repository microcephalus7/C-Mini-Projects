#include <stdio.h>
#include <math.h>

// 수를 받는 함수
void ScanNum (int * num1) {
    fputs("수를 입력해주세요 : ", stdout);
    scanf("%d", num1);

    return;
}

// 연산 결과를 출력하는 함수
void PrintResult (int num1) {
    printf("%d 의 제곱은 %d \n", num1, (int)pow((double) num1, 2.0));

    return;
}

int main (void) {

    int num1;

    ScanNum(&num1);
    PrintResult(num1);

    return 0;

}