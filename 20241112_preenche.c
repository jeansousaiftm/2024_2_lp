#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < 0) {
            v[i] = 42;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
