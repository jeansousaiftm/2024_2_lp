#include<stdio.h>

int main() {

    int dias;
    scanf("%d", &dias);

    int a = dias / 365;
    dias = dias % 365;
    int m = dias / 30;
    int d = dias % 30;

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
