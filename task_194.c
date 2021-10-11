#include <stdio.h>

int main() {
    int mas[100];
    int num, num_el, min_el = 0, max_el = 0, index_min = 0, index_max = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &num_el);
        mas[i] = num_el;
        min_el = mas[0];
        max_el = mas[0];
    }
    for (int i = 1; i < num; i++) {
        if (mas[i] < min_el) {
            min_el = mas[i];
            index_min = i;
        }
        if (mas[i] > max_el) {
            max_el = mas[i];
            index_max = i;
        }
    }
    mas[index_min] = max_el;
    mas[index_max] = min_el;  
    for (int i = 0; i < num; i++) {
        printf("%d ", mas[i]);
    }
    return 0;
}
