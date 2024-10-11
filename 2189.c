#include<stdio.h>

int main() {

    int n, x, t = 1;

    while (scanf("%d", &n) && n > 0) {
        printf("Teste %d\n", t++);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &x);
            if (x == i) {
                printf("%d\n\n", x);
            }
        }
    }

    return 0;
}
