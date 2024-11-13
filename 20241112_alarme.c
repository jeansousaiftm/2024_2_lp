#include<stdio.h>

int main() {
    int h1, m1, h2, m2;

    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2)
            && h1 + m1 + h2 + m2 > 0) {
        int r1 = h1 * 60 + m1;
        int r2 = h2 * 60 + m2;
        if (r1 < r2) {
            printf("%d\n", r2 - r1);
        } else {
            printf("%d\n", (1440 - r1) + r2);
        }
    }
    return 0;
}
