#include <stdio.h>
int main() {
    int n = 7;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++)
            if (j < n - i - 1)
                printf(" ");
            else if ((j - n + i) % 2)
                printf("%d", i + 1);
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}
