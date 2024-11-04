#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char tmp[n + 1];
    int v[n + 1];
    for (int i = 0; i <= n; i++) {
        v[i] = 0;
    }
    scanf("%s", tmp);

    for (int i = 1; i < n; i++) {
        if (tmp[i] == 'a' && tmp[i - 1] == 'a') {
            v[i] = 1;
            v[i - 1] = 1;
        }
    }
    int r = 0;
    for (int i = 0; i <= n; i++) {
        r += v[i];
    }
    printf("%d\n", r);
    return 0;
}
