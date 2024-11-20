#include<stdio.h>
#define N 3

int linhaVencedora(int m[N][N], int l) {
    for (int i = 1; i < N; i++) {
        if (m[l][0] != m[l][i]) {
            return 0;
        }
    }
    return m[l][0];
}

int colunaVencedora(int m[N][N], int c) {
    for (int i = 1; i < N; i++) {
        if (m[0][c] != m[i][c]) {
            return 0;
        }
    }
    return m[0][c];
}

int diagonalPrincipalVencedora(int m[N][N]) {
    for (int i = 1; i < N; i++) {
        if (m[0][0] != m[i][i]) {
            return 0;
        }
    }
    return m[0][0];
}

int diagonalSecundariaVencedora(int m[N][N]) {
    for (int i = 1, j = 1; i < N; i++, j--) {
        if (m[0][2] != m[i][j]) {
            return 0;
        }
    }
    return m[0][2];
}

int possuiVencedor(int m[N][N]) {

    int x = diagonalPrincipalVencedora(m);
    if (x != 0) {
        return x;
    }

    x = diagonalSecundariaVencedora(m);
    if (x != 0) {
        return x;
    }

    for (int i = 0; i < N; i++) {
        x = linhaVencedora(m, i);
        if (x != 0) {
            return x;
        }
        x = colunaVencedora(m, i);
        if (x != 0) {
            return x;
        }
    }

    return 0;
}

int main() {

    int m[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("%d\n", possuiVencedor(m));


    /*for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }*/

    return 0;
}
