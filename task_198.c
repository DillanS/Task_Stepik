#include <stdio.h>
#include <stdlib.h>

int** matrix_alloc(size_t width, size_t height);
void create_matrix(int** matrix, size_t width, size_t height);
void print_matrix(int **matrix, size_t width, size_t height);

int main() {
    int n;
    int m;  
    scanf("%d %d", &n, &m);
    int** matrix = matrix_alloc(n, m);
    create_matrix(matrix, n, m);
    print_matrix(matrix, n, m);
    return 0;
}
int** matrix_alloc(size_t width, size_t height) {
    int** matr = (int**) malloc(width*sizeof(int*));
    for (int i = 0; i < width; i++) {
        matr[i] = (int *)malloc(height/sizeof(int));
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
void print_matrix(int **matrix, size_t width, size_t height) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
} 