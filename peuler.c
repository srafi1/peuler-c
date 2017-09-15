#include <stdio.h>

int problem1() {
    int i;
    int sum = 0;
    for (i = 0; i < 1000; i++) {
        if (i/3 == 0 || i/5 == 0) {
            sum = sum + i;
            printf("New sum after adding %d: %d \n", i, sum);
        }
    }
    return sum;
}

int main() {
    printf("Problem 1: %d \n", problem1());
}
