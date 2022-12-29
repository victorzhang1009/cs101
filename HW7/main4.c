#include <stdio.h>            // printf()
int main() {
    int n = 12345;
    int t = n / 1000 % 10;    // digit in thousands palce
    int o = n % 10;           // digit in ones place
    printf("%d\n", n + 999*(o - t)); // n - o + t - t*1000 + o*1000
    return 0;
}
