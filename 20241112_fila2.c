#include<stdio.h>

int main() {

    int n, x, t, r = 0;

    scanf("%d", &n);
    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d %d", &x, &t);

    for (int i = 0; i < n; i++) {
        if (x > v[i]) {
            r += t;
        }
    }

    printf("%d\n", r);
    return 0;
}
