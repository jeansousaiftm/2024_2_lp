#include<stdio.h>

int main() {
    int notas, moedas;
    scanf("%d.%d", &notas, &moedas);

    int n100 = notas / 100;
    notas = notas % 100;
    int n50 = notas / 50;
    notas = notas % 50;
    int n20 = notas / 20;
    notas = notas % 20;
    int n10 = notas / 10;
    notas = notas % 10;
    int n5 = notas / 5;
    notas = notas % 5;
    int n2 = notas / 2;
    int n1 = notas % 2;

    int m50 = moedas / 50;
    moedas = moedas % 50;
    int m25 = moedas / 25;
    moedas = moedas % 25;
    int m10 = moedas / 10;
    moedas = moedas % 10;
    int m5 = moedas / 5;
    int m1 = moedas % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}
