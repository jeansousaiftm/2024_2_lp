#include<stdio.h>

int main() {
    int a, v, t = 1;

    while (scanf("%d %d", &a, &v) && a + v > 0) {
        int maior = 0;
        int q[a + 1];
        for (int i = 0; i <= a; i++) {
            q[i] = 0;
        }
        for (int i = 0; i < v; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            q[x]++;
            q[y]++;
            if (q[x] > maior) maior = q[x];
            if (q[y] > maior) maior = q[y];
        }
        printf("Teste %d\n", t++);
        for (int i = 0; i <= a; i++) {
            if (q[i] == maior) {
                printf("%d ", i);
            }
        }
        printf("\n\n");
    }


    return 0;
}
