#include <stdio.h>

int get_digit(int n) {
    int value = 0, nn = n;
    while (nn > 0) {
        value *= 10;
        value += nn % 10;
        nn /= 10;
    }
    return value;
}

int main() {
    int n = 1234;
    int sum = 0;
    sum = get_digit(n);
    printf("sum = %d\n", sum);
    //printf("%d --> %d\n", 4443, get_digit(4443));
    return 0;
}
