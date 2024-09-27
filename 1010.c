#include<stdio.h>

int main() {

    int q1, q2;
    double v1, v2;

    scanf("%*d %d %lf", &q1, &v1);
    scanf("%*d %d %lf", &q2, &v2);

    double total = (q1 * v1) + (q2 * v2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
