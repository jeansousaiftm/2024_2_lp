#include<stdio.h>
#define TAM 61

int main() {

    long long fib[TAM];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < TAM; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        //printf("%d %lld\n", i, fib[i]);
    }

    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, fib[x]);
    }

    return 0;
}
