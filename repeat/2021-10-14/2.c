// 10진수를 입력 받아 2진수로 출력 (비트, for, list)

#include <stdio.h>

void ScanInput (int * num);
void PrintResult (int num ); 

int main (void) {

    int num;

    ScanInput(&num);
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

// 비트 연산자 응용
// void PrintResult (int num) {

//     int i = 1;
//     int count = 0;

//     fputs("2진수 : ", stdout);

//     while (num > i) {
//         i *= 2;
//         count += 1;
//     }

//     for (i = count - 1; i >= 0; i--) {
//         if (num >> i & 1) {
//             fputs("1", stdout);
//         } else {
//             fputs("0", stdout);
//         }
//     }



//     fputs("\n", stdout);

//     return;

// }

// list
void PrintResult (int num) {

    char str[8];
    int i;
    int j;

    for (i = 0; i < 7; i++) {
        if (num <= 0) {
            break;
        }

        if (num % 2 == 1) {
            str[i] = 1;
        } else {
            str[i] = 0;
        }

        num /= 2;

    }
    fputs("2진수 : ", stdout);

    for (j = i; j >= 0; j--) {
        printf("%d", str[j]);
    }
    
    fputs("\n", stdout);

    return;

}