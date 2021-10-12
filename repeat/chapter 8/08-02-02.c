#include <stdio.h>

int main (void) {
    int a;
    int z;

    for (a = 1; a < 10; a++) {
        for (z = 1; z < 10; z++) {
            if (a + z == 9) {
                printf("a : %d, z : %d, A Z + Z A = %d \n", a, z, (10 * a) + z + a + (10 * z) );
                continue;
            }
        }
    }

    return 0;
}