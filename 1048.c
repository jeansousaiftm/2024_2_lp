#include<stdio.h>

int main() {

    double salario, perc;
    scanf("%lf", &salario);

    if (salario > 2000) {
        perc = 4;
    } else if (salario > 1200) {
        perc = 7;
    } else if (salario > 800) {
        perc = 10;
    } else if (salario > 400) {
        perc = 12;
    } else {
        perc = 15;
    }

    double reajuste = salario * (perc / 100);
    double novoSalario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", perc);

    return 0;
}
