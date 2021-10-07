#include <stdio.h>

int main() {
    int num;
    while (scanf("%d", &num) == 1 && num) {
        if (num > 0) {
            printf("%d ", num);
        }
    }
    return 0;
}