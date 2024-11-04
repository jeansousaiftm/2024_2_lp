#include<stdio.h>

int calculaDV1(int v[]) {
    int r = 0;
    for (int i = 0; i < 9; i++) {
        r += (v[i] * (i + 1));
    }
    int resto = r % 11;
    if (resto == 10) return 0;
    return resto;
}

int calculaDV2(int v[]) {
    int r = 0;
    for (int i = 0, j = 9; i < 9; i++, j--) {
        r += (v[i] * j);
    }
    int resto = r % 11;
    if (resto == 10) return 0;
    return resto;
}

int main() {

    char x[15];
    int v[11];

    while (scanf("%s", x) != EOF) {

        for (int i = 0, j = 0; i < 14; i++) {
            if (x[i] != '-' && x[i] != '.') {
                v[j] = x[i] - '0';
                j++;
            }
        }

        if (v[9] == calculaDV1(v)
            && v[10] == calculaDV2(v)) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }

    }

    return 0;
}
