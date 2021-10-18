#include <stdio.h>

int main (void) {
    int nums[] = {1, 2, 3, 4, 5};

    int * ptr = nums;

    int i;

    for (i = 0; i < 5; i++) {
        *(ptr + i) += 2;
    }

    for (i = 0; i < 5; i++) {
        printf("%d \n", nums[i]);
    }

    return 0;
}