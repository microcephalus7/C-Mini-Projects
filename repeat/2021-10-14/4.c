// 네 수중 가장 큰 수 return 하는 함수 선언
#include <stdio.h>

void ScanInput (int * nums, int len);
void MaxSort (int * nums, int len);
void PrintResult (int * nums, int len);

int main (void) {
    int nums[4];
    int len = sizeof(nums) / sizeof(int);

    ScanInput(nums, len);
    MaxSort(nums, len);
    PrintResult(nums, len);

    return 0;
}

void ScanInput (int * nums, int len) {

    int i;

    for (i = 0; i < len; i++) {
        fputs("숫자 입력 : ", stdout);
        scanf("%d", &nums[i]);
    }
    
    return;

}

void MaxSort (int * nums, int len) {
    int i;

    for (i = 0; i < len - 1; i++) {
        int temp;

        if (nums[i] > nums[i + 1]) {
            temp = nums[i];

            nums[i] = nums[i + 1];
            nums[i + 1] = temp;

        }
    }

    return;
}

void PrintResult (int * nums, int len) {

    printf("최대값 : %d \n", nums[len - 1]);

    return;

}