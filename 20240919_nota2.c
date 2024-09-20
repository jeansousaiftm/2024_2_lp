#include<stdio.h>

int main() {

    double nota, frequencia;

    scanf("%lf %lf", &nota, &frequencia);

    if (nota < 6 || frequencia < 75) {
        printf("REPROVADO\n");
    } else {
        printf("APROVADO\n");
    }

    return 0;
}
