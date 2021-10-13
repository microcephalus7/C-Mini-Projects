#include <stdio.h>

void ScanInput (char * str);
void MeasureLength (char * str, int *len);
void PrintResult (int len);

int main (void) {
    
    char str[20];
    int len = 0;

    ScanInput(str);
    MeasureLength(str, &len);
    PrintResult(len);

    return 0;

}

void ScanInput (char * str) {
    
    fputs("단어 입력 : ", stdout);
    scanf("%s", str);

}
void MeasureLength (char * str, int * len) {



    while (str[*len] != '\0') {
        (*len)++;
    }

    return ;

}
void PrintResult (int len) {
    
    printf("길이 : %d \n", len);

    return;

}