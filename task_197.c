#include <stdio.h>

int main() {
  int n, m, num_el = 0;
  int matrix[10][10];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &num_el);
      matrix[i][j] = num_el;
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matrix[j][i]);
    }
    printf("\n");
  }
  return 0;
}
