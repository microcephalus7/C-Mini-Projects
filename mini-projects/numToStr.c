// 숫자를 4개를 받아 문자로 출력하는 프로그램을 작성
// 숫자는 Ascii 코드를 따름

#include <stdio.h>

void Scan(int * num, int len);
void PrintResult (int * num, int len);

int main (void) {
    int num[4];

    int len = sizeof(num) / sizeof(int);

    Scan(num, len );
    PrintResult(num, len);

    return 0;

}

// 사용자 입력
void Scan(int * num, int len) {
    int i;

    for (i = 0; i < len; i++) {
        fputs("숫자 입력 : ", stdout);
        scanf("%d", &num[i]);
    }

    return;
}

// 결과 출력
void PrintResult (int * num, int len) {
    int i;
    
    for (i = 0; i < len; i++) {
        printf("%c", num[i]);
    }

    fputs("\n", stdout);

    return;
}