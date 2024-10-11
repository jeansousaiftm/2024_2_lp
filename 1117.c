#include<stdio.h>

int main() {

    double n1, n2;

    while (scanf("%lf", &n1) && (n1 < 0 || n1 > 10)) {
        printf("nota invalida\n");
    }

    while (scanf("%lf", &n2) && (n2 < 0 || n2 > 10)) {
        printf("nota invalida\n");
    }

    double media = (n1 + n2) / 2;

    printf("media = %.2lf\n", media);

    return 0;
}
