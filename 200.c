#include <stdio.h>
#include <stdlib.h>

int** matrix_alloc(size_t width, size_t height);
void create_matrix(int** matrix, size_t width, size_t height);
void diag_matrix(int** matrix, size_t width, size_t height);
void free_matrix(int **matrix, size_t width);
int min_num(int a, int b);
int max_num(int a, int b);

int main() {
    int n;
    scanf("%d", &n);
    int** matrix = matrix_alloc(n, n);
    create_matrix(matrix, n, n);
    diag_matrix(matrix, n, n);
    free_matrix(matrix, n);
    return 0;
}
int min_num(int a, int b) {
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
return min;
}
int max_num(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
return max;
}
int** matrix_alloc(size_t width, size_t height) {
    int** matr = (int**) malloc(width*sizeof(int*));
    for (int i = 0; i < width; i++) {
        matr[i] = (int *)malloc(height*sizeof(int));
    }
    return matr;
}
void create_matrix(int** matrix, size_t width, size_t height) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
} 
void diag_matrix(int** matrix, size_t width, size_t height) {
    int count_main = 1, count_side = 1;
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (i == j) {
                count_main *= matrix[i][j];  
            }
                if (i + j == height - 1) {
                count_side *= matrix[i][height - 1 - i];
                }
            }
        }
    printf("%d %d", max_num(count_main, count_side), min_num(count_main, count_side));
}
void free_matrix(int **matrix, size_t width) {
    for (int i = 0; i < width; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
