#include<stdio.h>
#define PESO1 3.5
#define PESO2 7.5

int main() {

    double n1, n2;

    scanf("%lf %lf", &n1, &n2);

    double media = (n1 * PESO1 + n2 * PESO2) / (PESO1 + PESO2);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
