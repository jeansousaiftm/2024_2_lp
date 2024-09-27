#include<stdio.h>
#define MIN_POR_HORA 60
#define HORAS_POR_DIA 24

int main() {
    int h1, m1, h2, m2, dif;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int tm1 = h1 * MIN_POR_HORA + m1;
    int tm2 = h2 * MIN_POR_HORA + m2;

    if (tm1 < tm2) {
        dif = tm2 - tm1;
    } else if (tm1 == tm2) {
        dif = HORAS_POR_DIA * MIN_POR_HORA;
    } else {
        dif = ((HORAS_POR_DIA * MIN_POR_HORA) - tm1) + tm2;
    }

    int hf = dif / MIN_POR_HORA;
    int mf = dif % MIN_POR_HORA;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);

    return 0;
}
