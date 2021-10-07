#include <stdio.h>


void Scan(char *);
void PrintResult (char );


int main (void) {
    char num;

    Scan(&num);
    PrintResult(num);

    return 0;
}

// 사옹자 입력
void Scan(char * num) {
    fputs("숫자 입력 : ", stdout);
    scanf("%d", num);

    return;
}
void PrintResult (char num) {
    printf("문자 : %c \n", num);

    return;
}