#include <stdio.h>

// 세 수를 받는 함수
void ScanNums (int * num1, int * num2, int * num3) {
    fputs("세 수를 입력해주세요 : ", stdout);
    scanf("%d %d %d", num1, num2, num3);

    return;
}

// 연산 결과를 출력하는 함수
void PrintResult (int num1, int num2, int num3) {

    printf("%dX%d+%d=%d \n", num1, num2, num3, (num1 * num2) + num3);
    
    return;
}

int main (void) {

    int num1;
    int num2;
    int num3;

    ScanNums(&num1, &num2, &num3);
    PrintResult(num1, num2, num3);

    return 0;

}