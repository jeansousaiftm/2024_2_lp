#include<stdio.h>

double p, v;

double calcularDesconto() {
    if (p == 100) {
        return 0;
    }
    double d = v - (v * p / 100);
    return d;
}

void qualquerCoisa() {
    if (p == 100) {
        return;
    }
    printf("Teste");
}

int main() {

    scanf("%lf %lf", &v, &p);
    //qualquerCoisa();
    double d = calcularDesconto();
    printf("%lf %lf %lf\n", v, p, d);

    return 0;
}
