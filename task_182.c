#include <stdio.h>

int main() {
    int count, num;
    scanf("%d", &count);
    int temp;
    scanf("%d", &num);
    temp = num;
    printf("%d", num);
    for (int i = 1; i < count; i++) {
        if (scanf("%d", &num) == 1 && num != temp) {
        printf("%d", num);
        } else {
            temp = num;
        }
    }
    return 0;
}
