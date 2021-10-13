// 숫자를 받아서 합계를 return 함수 생성 (static 변수 사용) 

#include <stdio.h>

int SumNums (int num) {
    static int sum = 0;
    
    sum += num;

    return sum;
}