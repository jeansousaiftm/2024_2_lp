#include<stdio.h>

int main() {

    int notas[] = { 50, 10, 5 };
    int n, t = 1;

    while (scanf("%d", &n) && n > 0) {
        printf("Teste %d\n", t++);
        for (int i = 0; i < 3; i++) {
            printf("%d ", n / notas[i]);
            n %= notas[i];
        }
        printf("%d\n\n", n);
    }

    return 0;
}
