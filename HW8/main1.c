#include <stdio.h>
int main() {
    int rows = 10;
    int base = rows * 2 - 1;
    for (int i = 0; i < base * rows; i++) {
        int r = i % base;
        if (r < rows - i / base - 1) {
            printf("  ");
        } else if (r > base - rows + i / base) {
            i = (i / base + 1) * base - 1;
            printf("\n");
        } else {
            printf(" *");
        }
    }
    printf("\n");
    return 0;
}
