#include<stdio.h>
#define PESO1 2
#define PESO2 3
#define PESO3 5

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double n1, n2, n3;
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        double media = (n1 * PESO1 + n2 * PESO2 + n3 * PESO3) / (PESO1 + PESO2 + PESO3);
        printf("%.1lf\n", media);
    }

    /* while (n--) {} */

    return 0;
}
