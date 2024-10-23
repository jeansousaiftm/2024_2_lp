#include<stdio.h>

int main() {

    int n, d = 0;

    scanf("%d", &n);
    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    d = v[0] - v[1];

    if (d == 0) {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < n - 1; i++) {
        if (d > 0 && v[i] - v[i + 1] >= 0) {
            printf("0\n");
            return 0;
        }
        if (d < 0 && v[i] - v[i + 1] <= 0) {
            printf("0\n");
            return 0;
        }
        d = v[i] - v[i + 1];
    }

    printf("1\n");
    return 0;
}
