#include<stdio.h>

int main() {
    int n, x, soma = 0, pg = 0;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        soma += x;
    }

    pg = (n * (n + 1)) / 2;

    printf("%d\n", pg - soma);

    return 0;
}
