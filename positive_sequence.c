#include <stdio.h>

int main() {
    int num, count = 0;
    if (scanf("%d", &num) == 1 && num != -9999) {
        while (num != -9999) {
            if (num < 0) {
                count = 1;
            }
            scanf("%d", &num);
        }
    } else {
        count = 1;
    }
    if (count == 0) {
            printf("YES");
        } else {
            printf("NO");
        }
    return 0;
}
