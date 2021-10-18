// 문자열을 입력받고 문자열의 길이를 출력하라

#include <stdio.h>
#include <string.h>

void ScanInput (char *);
void CountLen (char *, int *);
void PrintResult (int);

int main (void) {
    
    char str[30];
    int len = 0;
    ScanInput(str);
    CountLen(str, &len);    
    PrintResult(len);

    return 0;

}

void ScanInput (char * str) {

    fputs("문자열 입력 : ", stdout);
    scanf("%s", str);

    return;

}

// 직접 더함
// void CountLen (char * str, int * len) {

//     while (str[*len] != 0)
//     {
//         *len += 1;
//     }

//     return;
    

// }

// strlen
void CountLen (char * str, int * len) {

    *len = strlen(str);
    
    return;

}

void PrintResult (int len) {

    printf("문자열의 길이 : %d \n", len);

    return;

}