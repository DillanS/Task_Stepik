#include <stdio.h>
int fact(int n);
double exelent(double e);

int main() {
    double e;
    printf("Input e ");
    scanf("%d", &e);
    printf("f = %.8lf", exelent(e));
    return 0;
}
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
double exelent(double e) {
    double ee = 1.0;
    while (1/fact(e) < e) {
        ee += 1/fact(e);
    }
    return ee;
}