#include<stdio.h>

int main() {

    int a, v, t = 1;
    while (scanf("%d %d", &a, &v) && a + v > 0) {

        int c[a + 1];

        for (int i = 0; i <= a; i++) {
            c[i] = 0;
        }

        int x, y, maior = 0;

        for (int i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            c[x]++;
            c[y]++;
            if (c[x] > maior) maior = c[x];
            if (c[y] > maior) maior = c[y];
        }

        printf("Teste %d\n", t++);
        for (int i = 0; i <= a; i++) {
            if (c[i] == maior) {
                printf("%d ", i);
            }
        }
        printf("\n\n");

    }

    return 0;
}
