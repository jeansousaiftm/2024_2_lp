#include<stdio.h>

int main() {
    int i, soma = 0, qtd = 0;
    while (scanf("%d", &i) && i >= 0) {
        soma += i; // soma = soma + i
        qtd++;
    }
    if (qtd == 0) {
        printf("0.00\n");
        return 0;
    }
    double media = (double) soma / qtd;
    printf("%.2lf\n", media);
    return 0;
}
