#include <stdio.h>

int main() {
int count = 1, k = 1, a, x = -9999;
scanf("%d", &a);

while (a!= x) {
    int a1 = a;
    scanf("%d", &a);
    k++;
    if (a > a1) {
        a1 = a;
        count++;
    }
}
if (count == k-1){
    printf("YES");
    }else {
        printf("NO");
    }
    return 0;
}
