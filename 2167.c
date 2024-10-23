#include<stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("0\n");
    return 0;
}
