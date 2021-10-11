#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, m, num_el;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <m; j++) {
            scanf("%d", &num_el);
            matrix[i][j] = num_el;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
