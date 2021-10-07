#include <stdio.h>



void Scan (double * , double *);
void PrintResult (double, double);


int main (void) {

    double num1;
    double num2;

    Scan(&num1, &num2);
    PrintResult(num1, num2);

    return 0;

}

// 사용자 입력 받음
void Scan (double * num1, double * num2) {

    fputs("두 실수 입력 : ", stdout);
    scanf("%lf %lf", num1, num2);

    return ;
};


// 결과 출력
void PrintResult (double num1, double num2) {
    printf("합 : %lf \n", num1 + num2);
    printf("빼기 : %lf \n", num1 - num2);
    printf("곱셈 : %lf \n", num1 * num2);
    printf("나누기 : %lf \n", num1 / num2);

    return;
};
