#include<stdio.h>

int main() {

    double maior = 0;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double nota;
        scanf("%lf", &nota);
        if (nota > maior) {
            maior = nota;
        }
    }

    printf("%.2lf\n", maior);

    return 0;
}
