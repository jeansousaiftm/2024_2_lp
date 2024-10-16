#include<stdio.h>

int main() {

    int n;
    while (scanf("%d", &n) && n > 0) {
        int p[n + 1];
        for (int i = 1; i <= n; i++) {
            scanf("%d", &p[i]);
        }
        for (int i = 1; i <= n; i++) {
            if (i == p[i]) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
