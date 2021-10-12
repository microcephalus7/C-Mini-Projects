// 몇 번 입력할 지 입력받은 후 사용자 값이 0보다 큰 정수값을 받아서 평균 값 출력
// while, do-while, for 세가지 다 출력

#include <stdio.h>

void ScanInput (int *, int *);
void PrintResult (int, int);

int main (void) {
    int len;
    int sum = 0;

    ScanInput(&len, &sum);
    PrintResult(len, sum);

    return 0;
}

void ScanInput (int * len, int * sum) {

    

    fputs("몇 번 입력? : ", stdout);
    scanf("%d", len);

    // while
    // int i = 0;
    // while (i < *len) {
    //     int input = 0;

    //     while (input <= 0) {
    //         fputs("숫자 입력 : ", stdout);
    //         scanf("%d", &input);
    //     }
    //     *sum += input;
    //     i++;
    // }

    // for
    // int i;

    // for (i = 0; i < len; i++) {
    //     int input = 0;

    //     while (input <= 0) {
    //         fputs("숫자 입력 : ", stdout);
    //         scanf("%d", &input);
    //     }
    //     *sum += input;
    // }

    // do while
    
    int i;

    for (i = 0; i < *len; i++) {
        int input;

        do {
            fputs("숫자 입력 : ", stdout);
            scanf("%d", &input);
        } while (input <= 0);

        *sum += input;
    }
    

    return;

}
void PrintResult (int len, int sum) {
    
    printf("평균 : %lf \n", (double)sum / len);

    return;
}