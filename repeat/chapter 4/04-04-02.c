#include <stdio.h>




// 연산 결과를 출력하는 함수
void PrintResult (void) {
    printf("%d \n", 3 << 3 >> 2);

    return;
}

int main (void) {

    PrintResult();

    return 0;

}