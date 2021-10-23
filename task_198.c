#include <stdio.h>
#include <stdlib.h>

int** matrix_alloc(size_t width, size_t height);
void create_matrix(int** matrix, size_t width, size_t height);
void print_matrix(int **matrix, size_t width, size_t height);
void free_matrix(int **matrix, size_t width);

int main() {
    int n;
    scanf("%d", &n);
    int** matrix = matrix_alloc(n, n);
    create_matrix(matrix, n, n);
    print_matrix(matrix, n, n);
    free_matrix(matrix, n);
    return 0;
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
            if (i % 2 != 0) {
                matrix[i][j] = height - j;
            } else {
                matrix[i][j] = j + 1;
            }
        }
    }
} 
void print_matrix(int **matrix, size_t width, size_t height) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void free_matrix(int **matrix, size_t width) {
    for (int i = 0; i < width; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
