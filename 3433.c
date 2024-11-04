#include<stdio.h>

int main() {

    int b[14];
    for (int i = 0; i < 14; i++) {
        b[i] = 0;
    }
    int n, m = 0, j = 0, x, y;

    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    b[x]++;
    b[y]++;
    if (x > 10) x = 10;
    if (y > 10) y = 10;
    j = x + y;
    scanf("%d %d", &x, &y);
    b[x]++;
    b[y]++;
    if (x > 10) x = 10;
    if (y > 10) y = 10;
    m = x + y;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        b[x]++;
        if (x > 10) x = 10;
        m += x;
        j += x;
    }

    if (m >= j) {
        if (b[23 - m] < 4) {
            printf("%d\n", 23 - m);
            return 0;
        }
    } else if (j > m) {
        //printf("%d\n", j);
        int e = (23 - j) + 1;
        while (e <= 10) {
            if (b[e] < 4 && (m + e) <= 23) {
                printf("%d\n", e);
                return 0;
            }
            e++;
        }
    }
    printf("-1\n");

    return 0;
}
