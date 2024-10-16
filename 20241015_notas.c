#include<stdio.h>

int main() {

    int n, m;
    scanf("%d.%d", &n, &m);

    int vn[] = { 100, 50, 20, 10, 5, 2 };

    for (int i = 0; i < 6; i++) {
        int qn = n / vn[i];
        printf("%d nota(s) de R$ %d.00\n", qn, vn[i]);
        n = n % vn[i];
    }
    printf("%d moedas(s) de R$ 1.00\n", n);

    int vm[] = { 50, 25, 10, 5 };
    for (int i = 0; i < 4; i++) {
        int qm = m / vm[i];
        printf("%d moedas(s) de R$ 0.%02d\n", qm, vm[i]);
        m = m % vm[i];
    }
    printf("%d moedas(s) de R$ 0.01\n", m);

    return 0;
}
