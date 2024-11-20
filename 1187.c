#include<stdio.h>
#define N 12

int main() {

    char op;

    scanf("%c", &op);

    double m[N][N];
    double soma = 0;
    int qtd = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &m[i][j]);
            // Acima da DP e acima da DS
            if (i - j < 0 && i + j < N - 1) {
                soma += m[i][j];
                qtd++;
            }
        }
    }

    if (op == 'M') {
        double media = soma / qtd;
        printf("%.1lf\n", media);
    } else {
        printf("%.1lf\n", soma);
    }

    return 0;
}
