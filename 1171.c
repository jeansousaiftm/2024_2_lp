#include<stdio.h>
#define TAM 2001

int main() {

    int n, x;
    int c[TAM];

    for (int i = 0; i < TAM; i++) {
        c[i] = 0;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        c[x]++;
    }

    for (int i = 0; i < TAM; i++) {
        if (c[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, c[i]);
        }
    }

    return 0;
}
