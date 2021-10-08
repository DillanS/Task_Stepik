#include <stdio.h>

int main() {
    int num, count = 0, x = -9999;
    scanf("%d", &num);
    int num_next;
    for (count = 2; scanf("%d", &num_next) == 1 && num < num_next && num != x; count++) {
        num = num_next;
    }
    if (num_next == x) {
        printf("0");
    } else {
        printf("%d", count);
    }
    return 0;
}
