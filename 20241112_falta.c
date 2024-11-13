#include<stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int v[n + 1];
    for (int i = 1; i <= n; i++) {
        v[i] = 0;
    }
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        v[x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
