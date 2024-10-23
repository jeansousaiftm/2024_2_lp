#include<stdio.h>
#define TAM 100001

int main() {

    int a, b, x;

    while (scanf("%d %d", &a, &b) && a + b > 0) {

        int ca[TAM], cb[TAM];
        int ta = 0, tb = 0;

        for (int i = 0; i < TAM; i++) {
            ca[i] = 0;
            cb[i] = 0;
        }

        for (int i = 0; i < a; i++) {
            scanf("%d", &x);
            ca[x]++;
        }

        for (int i = 0; i < b; i++) {
            scanf("%d", &x);
            cb[x]++;
        }

        for (int i = 0; i < TAM; i++) {
            if (ca[i] > 0 && cb[i] == 0) {
                ta++;
            }
            if (cb[i] > 0 && ca[i] == 0) {
                tb++;
            }
        }

        printf("%d\n", (ta < tb) ? ta : tb);

        /*if (ta < tb) {
            printf("%d\n", ta);
        } else {
            printf("%d\n", tb);
        }*/

    }

    return 0;
}
