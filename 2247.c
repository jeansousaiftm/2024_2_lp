#include<stdio.h>

int main() {

    int n, t = 1;
    while (scanf("%d", &n) && n > 0) {
        int j, z, d = 0;
        printf("Teste %d\n", t++);
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &j, &z);
            d += (j - z);
            printf("%d\n", d);
        }
        printf("\n");
    }

    return 0;
}
