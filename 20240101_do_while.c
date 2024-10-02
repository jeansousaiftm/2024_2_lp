#include<stdio.h>

int main() {

    int op;

    do {

        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);

        printf("1-continuar 2-sair: ");
        scanf("%d", &op);

        while (op != 1 && op != 2) {
            printf("1-continuar 2-sair: ");
            scanf("%d", &op);
        }

    } while (op == 1);

    return 0;
}
