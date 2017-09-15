#include <stdio.h>

int problem1() {
    int i;
    int sum = 0;
    for (i = 0; i < 1000; i++) {
        //printf("checking for %d \n", i);
        if (i%3 == 0 || i%5 == 0) {
            sum = sum + i;
            //printf("New sum after adding %d: %d \n", i, sum);
        }
    }
    return sum;
}

int problem2() {
    int fib1 = 1;
    int fib2 = 1;
    int swap = 0;
    int sum = 0;
    while (fib2 < 4000000) {
        swap = fib1;
        fib1 = fib2;
        fib2 += swap;
        if (fib2 % 2 == 0) {
            sum += fib2;
        }
    }
    return sum;
}

int main() {
    printf("Problem 1: %d \n", problem1());
    printf("Problem 2: %d \n", problem2());
}
