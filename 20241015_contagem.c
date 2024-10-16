#include<stdio.h>
#define N 5

int main() {

    int c[N + 1];
    for (int i = 0; i <= N; i++) {
        c[i] = 0;
    }

    int x;
    while (scanf("%d", &x) && x >= 0 && x <= N) {
        c[x]++;
    }

    for (int i = 0; i <= N; i++) {
        //printf("%d: %d\n", i, c[i]);
        for (int j = 0; j < c[i]; j++) {
            printf("%d\n", i);
        }
    }



    return 0;
}
