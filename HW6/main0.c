#include <stdio.h>
int main() {
    int i = 10;
    if (i & i - 1)
	printf("%d is false\n", i);
    else
	printf("%d is true\n", i);
    return 0;
}
