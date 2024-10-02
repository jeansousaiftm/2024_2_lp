#include<stdio.h>

int main() {

    int senha;
    scanf("%d", &senha);

    /*if (senha == 1234) {
        printf("Senha correta\n");
    } else {
        printf("Senha errada\n");
    }*/

    while (senha != 1234) {
        printf("Senha errada\n");
        //scanf("%d", &senha);
    }

    printf("OK\n");

    return 0;
}
