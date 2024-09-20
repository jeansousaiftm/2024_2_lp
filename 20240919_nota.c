#include<stdio.h>

int main() {

    double nota, frequencia;

    scanf("%lf %lf", &nota, &frequencia);

    if (nota >= 6 && frequencia >= 75) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
