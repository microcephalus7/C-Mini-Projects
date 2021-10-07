#include <stdio.h>

typedef struct dot {
    int x;
    int y;
} Dot;

void Scan (Dot *left, Dot *right);
void PrintResult (Dot left, Dot right);


int main (void) {

    Dot left;
    Dot right;

    Scan(&left, &right);
    PrintResult(left, right);

    return 0;

}

// 사용자 입력 받음
void Scan (Dot *left, Dot *right) {

    fputs("좌 상단의 x, y 좌표 : ", stdout);
    scanf("%d %d", &(left -> x), &(left -> y));

    fputs("좌 상단의 x, y 좌표 : ", stdout);
    scanf("%d %d", &(right -> x), &(right -> y));

    return ;
};


// 결과 출력
void PrintResult (Dot left, Dot right) {
    printf("직사각형의 넓이 : %d \n", (left.x - right.x) * (left.y - right.y));

    return;
};
