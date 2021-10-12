// 10진수를 입력받아 2진수로 출력
// 비트 연산자 쓴 것과 안 쓴 것 둘다 구현

#include <stdio.h>

void ScanInput (int *);
void PrintResult (int);

int main (void) {
    int num;

    // ScanInput(&num);
    PrintResult(num);

    return 0;
}

void ScanInput (int * num) {
    
    fputs("10진수 입력 : ", stdout);
    scanf("%d", num);

    return;

}
// 비트 연산자
// void PrintResult (int num) {

//     int i;

//     fputs("2진수 : ", stdout);

//     for (i = 7; i >= 0; i--) {
//         if (num >> i & 1) {
//             fputs("1", stdout);
//         } else {
//             fputs("0", stdout);
//         }
//     }

//     fputs("\n", stdout);

//     return;

// }

// 비트 연산자 x
void PrintResult (int num) {
    int i = 1;
    int num1 = 12;

    while (num1 > i) {
        i *= 2;

    }


    fputs("2진수 : ", stdout);

    while (i != 0) {
        if (num1 >= i ) {
            printf("1");
            num1 -= i;
        } else {
            printf("0");
        }
        i /= 2;
    }

    return;

}