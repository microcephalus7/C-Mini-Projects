#include <stdio.h>

// 두 수를 받는 함수
void ScanNums (int * num1, int * num2) {
    fputs("두 수를 입력해주세요 : ", stdout);
    scanf("%d %d", num1, num2);

    return;
}

// 연산결과를 출력하는 함수
void PrintResult (int num1, int num2) {
    printf("몫 : %d \n", num1 / num2);
    printf("나머지 : %d \n", num1 % num2);

    return;
}

int main (void) {

    int num1;
    int num2;

    ScanNums(&num1, &num2);
    PrintResult(num1, num2);

    return 0;

}