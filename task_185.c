#include <stdio.h>
#define BEGIN_NUM 2517
#define END_NUM -9999

int main() {
    int num;
    scanf("%d", &num);
    for (int i = BEGIN_NUM; scanf("%d", &num) == 1 && num != END_NUM; i++) {
        printf("%d", num);
    }
    return 0;
}
