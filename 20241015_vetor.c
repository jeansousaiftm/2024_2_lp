#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    double notas[n];

    for (int i = 0; i < n; i++) {
        scanf("%lf", &notas[i]);
    }

    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }

    double media = soma / n;

    printf("%.2lf\n", media);

    return 0;
}
