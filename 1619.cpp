#include<stdio.h>
#include<math.h>

int eBissexto(int ano) {
    if (ano % 400 == 0) return 1;
    if (ano % 4 == 0 && ano % 100 != 0) return 1;
    return 0;
}

int qtdDiasDesde1970(int d, int m, int a) {
    int q = 0;
    int qtdDiasMes[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int i = 1970; i < a; i++) {
        q += 365;
        if (eBissexto(i)) {
            q += 1;
        }
    }
    for (int i = 1; i < m; i++) {
        q += qtdDiasMes[i];
        if (eBissexto(a) && i == 2) {
            q += 1;
        }
    }
    q += d;
    return q;
}

int main() {

    int n;
    scanf("%d", &n);

    while (n--) {
        int a1, m1, d1, a2, m2, d2;

        scanf("%d-%d-%d %d-%d-%d", &a1, &m1, &d1, &a2, &m2, &d2);

        int dif = fabs(qtdDiasDesde1970(d2, m2, a2) - qtdDiasDesde1970(d1, m1, a1));

        printf("%d\n", dif);
    }

    return 0;
}
