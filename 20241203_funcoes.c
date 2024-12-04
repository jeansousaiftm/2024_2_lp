#include<stdio.h>

double calcularDesconto(double v, double p) {
    //p = 90;
    double d = v - (v * p / 100);
    return d;
}

void qualquerCoisa() {
    printf("Teste");
}

int main() {

    double v, p;
    scanf("%lf %lf", &v, &p);
    //qualquerCoisa();
    double d = calcularDesconto(v, p);
    printf("%lf %lf %lf\n", v, p, d);

    return 0;
}
