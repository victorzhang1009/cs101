#include <stdio.h>

void get_binary(int n) {
    unsigned int mask = 1 << sizeof(n) * 8 - 1;
    printf("%d -> \t", n);
    for (int i = 0; i < sizeof(n) * 8; i++) {
        printf("%c", n & mask ? '1' : '0');
        mask = mask >> 1;
        if ((i + 1) % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    get_binary(6);
    get_binary(16);
    get_binary(255);
    return 0;
}
