#include<stdio.h>

int main() {
    char op;
    int a, b, resultado;
    scanf("%d%c%d", &a, &op, &b);

    if (op == '+') {
        resultado = a + b;
        printf("%d\n", resultado);
        return 0;
    }

    if (op == '-') {
        resultado = a - b;
        printf("%d\n", resultado);
        return 0;
    }

    if (op == '*') {
        resultado = a * b;
        printf("%d\n", resultado);
        return 0;
    }

    if (op == '/') {
        double divisao = (double) a / b;
        printf("%.2lf\n", divisao);
        return 0;
    }

    printf("Operacao nao reconhecida\n");

    return 0;
}
